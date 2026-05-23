use std::collections::HashMap;
use std::fs;

const GRID_STEP: f64 = 0.1;
const LAT_CELLS: usize = 1800;
const LON_CELLS: usize = 3600;
const EPS: f64 = 1e-10;
const BITMAP_PATH: &str = "preprocessed/bitmap.bin";

fn main() {
    println!("cargo:rerun-if-changed=left-right-hand-traffic.osm");
    println!("cargo:rerun-if-changed={BITMAP_PATH}");
    let output_path = std::path::Path::new(BITMAP_PATH);
    if output_path.exists() {
        return;
    }
    if let Some(parent) = output_path.parent() {
        fs::create_dir_all(parent).expect("failed to create preprocessed dir");
    }

    let osm = fs::read_to_string("left-right-hand-traffic.osm")
        .expect("failed to read left-right-hand-traffic.osm");
    let polygons = parse_osm_polygons(&osm);
    let states = build_bitmap_states(&polygons);
    let packed = pack_states(&states);
    fs::write(output_path, packed).expect("failed to write bitmap.bin");
}

#[derive(Clone, Copy, PartialEq, Eq)]
enum CellState {
    No = 0,
    Yes = 1,
    Partially = 2,
}

#[derive(Clone)]
struct Polygon {
    planar_vertices: Vec<PlanarPoint>,
    ref_lon: f64,
    min_lat: f64,
    max_lat: f64,
}

impl Polygon {
    fn lat_bounds(&self) -> (f64, f64) {
        (self.min_lat, self.max_lat)
    }

    fn candidate_cols(&self) -> Vec<usize> {
        let min_lon = self
            .planar_vertices
            .iter()
            .map(|p| p.x)
            .fold(f64::INFINITY, f64::min)
            - GRID_STEP;
        let max_lon = self
            .planar_vertices
            .iter()
            .map(|p| p.x)
            .fold(f64::NEG_INFINITY, f64::max)
            + GRID_STEP;
        let mut cols = Vec::new();
        for col in 0..LON_CELLS {
            let (cell_min, cell_max) = shifted_lon_bounds_for_col(col, self.ref_lon);
            if ranges_overlap(cell_min, cell_max, min_lon, max_lon) {
                cols.push(col);
            }
        }
        cols
    }
}

#[derive(Clone, Copy)]
struct PlanarPoint {
    x: f64,
    y: f64,
}

impl PlanarPoint {
    const fn new(x: f64, y: f64) -> Self {
        Self { x, y }
    }
}

#[derive(Clone, Copy)]
struct CellRect {
    row: usize,
    col: usize,
}

impl CellRect {
    fn new(row: usize, col: usize) -> Self {
        Self { row, col }
    }

    fn bounds(self) -> (f64, f64, f64, f64) {
        let min_lat = -90.0 + self.row as f64 * GRID_STEP;
        let max_lat = min_lat + GRID_STEP;
        let min_lon = -180.0 + self.col as f64 * GRID_STEP;
        let max_lon = min_lon + GRID_STEP;
        (min_lat, min_lon, max_lat, max_lon)
    }

    fn maybe_intersects(self, poly: &Polygon) -> bool {
        let (min_lat, min_lon, max_lat, max_lon) = self.bounds();
        let cell_min_lon = wrap_to_reference(min_lon, poly.ref_lon);
        let cell_max_lon = wrap_to_reference(max_lon, poly.ref_lon);
        let cell_min_lon = cell_min_lon.min(cell_max_lon);
        let cell_max_lon = cell_min_lon.max(cell_max_lon);
        let poly_min_lon = poly
            .planar_vertices
            .iter()
            .map(|p| p.x)
            .fold(f64::INFINITY, f64::min);
        let poly_max_lon = poly
            .planar_vertices
            .iter()
            .map(|p| p.x)
            .fold(f64::NEG_INFINITY, f64::max);
        let poly_min_lat = poly
            .planar_vertices
            .iter()
            .map(|p| p.y)
            .fold(f64::INFINITY, f64::min);
        let poly_max_lat = poly
            .planar_vertices
            .iter()
            .map(|p| p.y)
            .fold(f64::NEG_INFINITY, f64::max);
        !(cell_max_lon < poly_min_lon
            || cell_min_lon > poly_max_lon
            || max_lat < poly_min_lat
            || min_lat > poly_max_lat)
    }

    fn planar_corners(self, ref_lon: f64) -> [PlanarPoint; 4] {
        let (min_lat, min_lon, max_lat, max_lon) = self.bounds();
        let min_lon = wrap_to_reference(min_lon, ref_lon);
        let max_lon = wrap_to_reference(max_lon, ref_lon);
        [
            PlanarPoint::new(min_lon, min_lat),
            PlanarPoint::new(max_lon, min_lat),
            PlanarPoint::new(max_lon, max_lat),
            PlanarPoint::new(min_lon, max_lat),
        ]
    }

    fn contains(self, point: PlanarPoint, ref_lon: f64) -> bool {
        let (min_lat, min_lon, max_lat, max_lon) = self.bounds();
        let min_lon = wrap_to_reference(min_lon, ref_lon);
        let max_lon = wrap_to_reference(max_lon, ref_lon);
        let lon_ok = if min_lon <= max_lon {
            point.x >= min_lon - EPS && point.x <= max_lon + EPS
        } else {
            point.x >= min_lon - EPS || point.x <= max_lon + EPS
        };
        lon_ok && point.y >= min_lat - EPS && point.y <= max_lat + EPS
    }
}

#[derive(Clone, Copy)]
enum CellRelation {
    Inside,
    Outside,
    Crossing,
}

fn build_bitmap_states(polygons: &[Polygon]) -> Vec<CellState> {
    let mut cells = vec![CellState::No; LAT_CELLS * LON_CELLS];
    for poly in polygons {
        let (min_lat, max_lat) = poly.lat_bounds();
        let mut row_start = lat_to_index(min_lat).unwrap_or(0);
        let mut row_end = lat_to_index(max_lat).unwrap_or(LAT_CELLS - 1);
        row_start = row_start.saturating_sub(1);
        row_end = (row_end + 1).min(LAT_CELLS - 1);
        let candidate_cols = poly.candidate_cols();

        for row in row_start..=row_end {
            for &col in &candidate_cols {
                let cell = CellRect::new(row, col);
                if !cell.maybe_intersects(poly) {
                    continue;
                }
                let relation = cell_relation(cell, poly);
                let idx = row * LON_CELLS + col;
                match relation {
                    CellRelation::Inside => cells[idx] = CellState::Yes,
                    CellRelation::Crossing => {
                        if cells[idx] != CellState::Yes {
                            cells[idx] = CellState::Partially;
                        }
                    }
                    CellRelation::Outside => {}
                }
            }
        }
    }
    cells
}

fn cell_relation(cell: CellRect, poly: &Polygon) -> CellRelation {
    let corners = cell.planar_corners(poly.ref_lon);
    let inside = corners
        .iter()
        .filter(|&&c| planar_point_in_polygon(c, poly))
        .count();
    let edge_hit = polygon_intersects_cell_planar(poly, cell);
    if inside == 4 && !edge_hit {
        CellRelation::Inside
    } else if inside > 0 || edge_hit || poly.planar_vertices.iter().any(|&v| cell.contains(v, poly.ref_lon))
    {
        CellRelation::Crossing
    } else {
        CellRelation::Outside
    }
}

fn polygon_intersects_cell_planar(poly: &Polygon, cell: CellRect) -> bool {
    let corners = cell.planar_corners(poly.ref_lon);
    let edges = [
        (corners[0], corners[1]),
        (corners[1], corners[2]),
        (corners[2], corners[3]),
        (corners[3], corners[0]),
    ];
    let mut polygon_edges = poly
        .planar_vertices
        .windows(2)
        .map(|w| (w[0], w[1]))
        .collect::<Vec<_>>();
    if let (Some(&first), Some(&last)) = (poly.planar_vertices.first(), poly.planar_vertices.last()) {
        polygon_edges.push((last, first));
    }
    for &(a, b) in &edges {
        for &(c, d) in &polygon_edges {
            if planar_segments_intersect(a, b, c, d) {
                return true;
            }
        }
    }
    if poly.planar_vertices.iter().any(|&v| cell.contains(v, poly.ref_lon)) {
        return true;
    }
    corners.iter().any(|&c| planar_point_in_polygon(c, poly))
}

fn planar_point_in_polygon(point: PlanarPoint, poly: &Polygon) -> bool {
    let pts = &poly.planar_vertices;
    if pts.len() < 3 {
        return false;
    }
    let mut inside = false;
    for i in 0..pts.len() {
        let a = pts[i];
        let b = pts[(i + 1) % pts.len()];
        if point_on_segment_planar(point, a, b) {
            return true;
        }
        let intersects = ((a.y > point.y) != (b.y > point.y))
            && (point.x < (b.x - a.x) * (point.y - a.y) / (b.y - a.y + 0.0) + a.x);
        if intersects {
            inside = !inside;
        }
    }
    inside
}

fn point_on_segment_planar(p: PlanarPoint, a: PlanarPoint, b: PlanarPoint) -> bool {
    let cross = (b.x - a.x) * (p.y - a.y) - (b.y - a.y) * (p.x - a.x);
    if cross.abs() > 1e-9 {
        return false;
    }
    let dot = (p.x - a.x) * (p.x - b.x) + (p.y - a.y) * (p.y - b.y);
    dot <= 1e-9
}

fn planar_segments_intersect(a1: PlanarPoint, a2: PlanarPoint, b1: PlanarPoint, b2: PlanarPoint) -> bool {
    fn orient(a: PlanarPoint, b: PlanarPoint, c: PlanarPoint) -> f64 {
        (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x)
    }
    let o1 = orient(a1, a2, b1);
    let o2 = orient(a1, a2, b2);
    let o3 = orient(b1, b2, a1);
    let o4 = orient(b1, b2, a2);
    if o1.abs() <= 1e-9 && point_on_segment_planar(b1, a1, a2) {
        return true;
    }
    if o2.abs() <= 1e-9 && point_on_segment_planar(b2, a1, a2) {
        return true;
    }
    if o3.abs() <= 1e-9 && point_on_segment_planar(a1, b1, b2) {
        return true;
    }
    if o4.abs() <= 1e-9 && point_on_segment_planar(a2, b1, b2) {
        return true;
    }
    (o1 > 0.0) != (o2 > 0.0) && (o3 > 0.0) != (o4 > 0.0)
}

fn pack_states(states: &[CellState]) -> Vec<u8> {
    let mut packed = vec![0u8; states.len().div_ceil(4)];
    for (idx, state) in states.iter().enumerate() {
        let byte_idx = idx / 4;
        let offset = (idx % 4) * 2;
        packed[byte_idx] |= (*state as u8) << offset;
    }
    packed
}

fn parse_osm_polygons(input: &str) -> Vec<Polygon> {
    let normalized = input.replace("><", ">\n<");
    let mut nodes = HashMap::<i64, (f64, f64)>::new();
    let mut polygons = Vec::new();
    let mut current_way: Option<Vec<i64>> = None;

    for raw_line in normalized.lines() {
        let line = raw_line.trim();
        if line.starts_with("<node ") {
            let id = attr_i64(line, "id");
            let lat = attr_f64(line, "lat");
            let lon = attr_f64(line, "lon");
            nodes.insert(id, (lat, lon));
        } else if line.starts_with("<way ") {
            current_way = Some(Vec::new());
        } else if line.starts_with("<nd ") {
            if let Some(ref mut refs) = current_way {
                refs.push(attr_i64(line, "ref"));
            }
        } else if line.starts_with("</way>") {
            if let Some(refs) = current_way.take() {
                let mut points = Vec::with_capacity(refs.len());
                let mut ok = true;
                for ref_id in refs {
                    if let Some(&(lat, lon)) = nodes.get(&ref_id) {
                        points.push((lat, lon));
                    } else {
                        ok = false;
                        break;
                    }
                }
                if ok && points.len() >= 3 {
                    polygons.push(polygon_from_ring(points));
                }
            }
        }
    }
    polygons
}

fn polygon_from_ring(mut points: Vec<(f64, f64)>) -> Polygon {
    if points.first() != points.last() {
        points.push(points[0]);
    }
    let ref_lon = points[0].1;
    let mut planar_vertices = Vec::new();
    let mut min_lat = f64::INFINITY;
    let mut max_lat = f64::NEG_INFINITY;
    for &(lat, lon) in points.iter().take(points.len() - 1) {
        min_lat = min_lat.min(lat);
        max_lat = max_lat.max(lat);
        planar_vertices.push(PlanarPoint::new(wrap_to_reference(lon, ref_lon), lat));
    }
    Polygon {
        planar_vertices,
        ref_lon,
        min_lat,
        max_lat,
    }
}

fn attr_i64(line: &str, key: &str) -> i64 {
    attr_value(line, key).parse::<i64>().expect("bad i64 attr")
}

fn attr_f64(line: &str, key: &str) -> f64 {
    attr_value(line, key).parse::<f64>().expect("bad f64 attr")
}

fn attr_value<'a>(line: &'a str, key: &str) -> &'a str {
    let needle = format!("{key}='");
    let start = line.find(&needle).expect("missing attr") + needle.len();
    let end = line[start..].find('\'').expect("unterminated attr");
    &line[start..start + end]
}

fn wrap_to_reference(lon: f64, reference: f64) -> f64 {
    let mut x = lon;
    let mut diff = x - reference;
    while diff > 180.0 {
        x -= 360.0;
        diff = x - reference;
    }
    while diff <= -180.0 {
        x += 360.0;
        diff = x - reference;
    }
    x
}

fn lat_to_index(lat: f64) -> Option<usize> {
    if !lat.is_finite() {
        return None;
    }
    let lat = lat.clamp(-90.0, 90.0);
    if (lat - 90.0).abs() < EPS {
        return Some(LAT_CELLS - 1);
    }
    let idx = ((lat + 90.0) / GRID_STEP).floor() as isize;
    if idx < 0 {
        Some(0)
    } else if idx as usize >= LAT_CELLS {
        Some(LAT_CELLS - 1)
    } else {
        Some(idx as usize)
    }
}

fn shifted_lon_bounds_for_col(col: usize, ref_lon: f64) -> (f64, f64) {
    let min_lon = -180.0 + col as f64 * GRID_STEP;
    let max_lon = min_lon + GRID_STEP;
    let a = wrap_to_reference(min_lon, ref_lon);
    let mut b = wrap_to_reference(max_lon, ref_lon);
    if b < a {
        b += 360.0;
    }
    (a, b)
}

fn ranges_overlap(a_min: f64, a_max: f64, b_min: f64, b_max: f64) -> bool {
    !(a_max < b_min || a_min > b_max)
}
