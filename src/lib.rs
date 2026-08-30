use std::error::Error as StdError;
use std::f64::consts::PI;
use std::fmt;
use std::fs;
use std::path::Path;
use std::sync::OnceLock;

const GRID_STEP: f64 = 0.1;
const LAT_CELLS: usize = 1800;
const LON_CELLS: usize = 3600;
const CELL_COUNT: usize = LAT_CELLS * LON_CELLS;
const BITMAP_PACKED_LEN: usize = CELL_COUNT.div_ceil(4);
const EPS: f64 = 1e-10;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Classification {
    Yes,
    No,
    Partially,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    Io(String),
    Parse(String),
    InvalidGeometry(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Io(msg) => write!(f, "I/O error: {msg}"),
            Error::Parse(msg) => write!(f, "parse error: {msg}"),
            Error::InvalidGeometry(msg) => write!(f, "invalid geometry: {msg}"),
        }
    }
}

impl StdError for Error {}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Point {
    pub lat: f64,
    pub lon: f64,
}

impl Point {
    pub const fn new(lat: f64, lon: f64) -> Self {
        Self { lat, lon }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct Line {
    pub points: Vec<Point>,
}

impl Line {
    pub fn new(points: Vec<Point>) -> Self {
        Self { points }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Bbox {
    pub min_lat: f64,
    pub min_lon: f64,
    pub max_lat: f64,
    pub max_lon: f64,
}

impl Bbox {
    pub const fn new(min_lat: f64, min_lon: f64, max_lat: f64, max_lon: f64) -> Self {
        Self {
            min_lat,
            min_lon,
            max_lat,
            max_lon,
        }
    }

    fn normalized_lats(&self) -> (f64, f64) {
        if self.min_lat <= self.max_lat {
            (self.min_lat, self.max_lat)
        } else {
            (self.max_lat, self.min_lat)
        }
    }
}

pub struct DrivingAreaIndex {
    polygons: Vec<Polygon>,
    bitmap: Bitmap,
}

static DEFAULT_INDEX: OnceLock<Result<DrivingAreaIndex, Error>> = OnceLock::new();

impl DrivingAreaIndex {
    pub fn from_osm_path(path: impl AsRef<Path>) -> Result<Self, Error> {
        let content = fs::read_to_string(path.as_ref())
            .map_err(|e| Error::Io(format!("failed to read {}: {e}", path.as_ref().display())))?;
        Self::from_osm_str(&content)
    }

    fn default_index() -> Result<&'static DrivingAreaIndex, Error> {
        match DEFAULT_INDEX.get_or_init(DrivingAreaIndex::from_default_osm) {
            Ok(index) => Ok(index),
            Err(err) => Err(err.clone()),
        }
    }

    pub fn classify_point_default(point: Point) -> Result<Classification, Error> {
        Self::default_index()?.classify_point(point)
    }

    pub fn classify_line_default(line: Line) -> Result<Classification, Error> {
        Self::default_index()?.classify_line(line)
    }

    pub fn classify_bbox_default(bbox: Bbox) -> Result<Classification, Error> {
        Self::default_index()?.classify_bbox(bbox)
    }

    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    pub extern "C" fn initialize_index_wasm() -> i32 {
        if Self::default_index().is_ok() { 0 } else { -1 }
    }

    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    pub extern "C" fn classify_point_wasm(lat: f64, lon: f64) -> i32 {
        match Self::classify_point_default(Point::new(lat, lon)) {
            Ok(Classification::Yes) => 1,
            Ok(Classification::No) => 0,
            Ok(Classification::Partially) => 2,
            Err(_) => -1,
        }
    }

    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    pub extern "C" fn classify_bbox_wasm(
        min_lat: f64,
        min_lon: f64,
        max_lat: f64,
        max_lon: f64,
    ) -> i32 {
        match Self::classify_bbox_default(Bbox::new(min_lat, min_lon, max_lat, max_lon)) {
            Ok(Classification::Yes) => 1,
            Ok(Classification::No) => 0,
            Ok(Classification::Partially) => 2,
            Err(_) => -1,
        }
    }

    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    #[allow(clippy::not_unsafe_ptr_arg_deref)]
    pub extern "C" fn classify_line_wasm(coords: *const f64, point_count: u32) -> i32 {
        if coords.is_null() || point_count == 0 {
            return -1;
        }
        let Some(coord_len) = point_count.checked_mul(2) else {
            return -1;
        };
        let coords = unsafe { core::slice::from_raw_parts(coords, coord_len as usize) };
        let mut points = Vec::with_capacity(point_count as usize);
        for chunk in coords.chunks_exact(2) {
            points.push(Point::new(chunk[0], chunk[1]));
        }
        match Self::classify_line_default(Line::new(points)) {
            Ok(Classification::Yes) => 1,
            Ok(Classification::No) => 0,
            Ok(Classification::Partially) => 2,
            Err(_) => -1,
        }
    }

    /// Allocate `bytes` of scratch space in the wasm linear memory so a JS caller
    /// can hand coordinate data to [`Self::classify_line_wasm`]. Returns null if the
    /// request is empty or the allocation fails. The caller must release the pointer
    /// with [`Self::gauche_free`] using the same `bytes` value.
    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    pub extern "C" fn gauche_alloc(bytes: u32) -> *mut u8 {
        if bytes == 0 {
            return core::ptr::null_mut();
        }
        // Align to f64, the element type the coordinate buffer is read back as.
        match std::alloc::Layout::from_size_align(bytes as usize, align_of::<f64>()) {
            Ok(layout) => unsafe { std::alloc::alloc(layout) },
            Err(_) => core::ptr::null_mut(),
        }
    }

    /// Release a pointer previously returned by [`Self::gauche_alloc`].
    ///
    /// # Safety
    /// `ptr` must come from [`Self::gauche_alloc`] and `bytes` must match the value
    /// used to allocate it.
    #[cfg(all(target_arch = "wasm32", feature = "web-wasm"))]
    #[unsafe(no_mangle)]
    #[allow(clippy::not_unsafe_ptr_arg_deref)]
    pub extern "C" fn gauche_free(ptr: *mut u8, bytes: u32) {
        if ptr.is_null() || bytes == 0 {
            return;
        }
        if let Ok(layout) = std::alloc::Layout::from_size_align(bytes as usize, align_of::<f64>()) {
            unsafe { std::alloc::dealloc(ptr, layout) }
        }
    }

    pub fn from_default_osm() -> Result<Self, Error> {
        let polygons = parse_osm_polygons(include_str!("../left-right-hand-traffic.osm"))?;
        if polygons.is_empty() {
            return Err(Error::Parse("no closed polygon ways found".into()));
        }
        let bitmap = Bitmap::from_preprocessed(include_bytes!("../preprocessed/bitmap.bin"))?;
        Ok(Self { polygons, bitmap })
    }

    pub fn from_osm_str(input: &str) -> Result<Self, Error> {
        let polygons = parse_osm_polygons(input)?;
        if polygons.is_empty() {
            return Err(Error::Parse("no closed polygon ways found".into()));
        }
        let bitmap = Bitmap::build(&polygons);
        Ok(Self { polygons, bitmap })
    }

    pub fn classify_point(&self, point: Point) -> Result<Classification, Error> {
        validate_point(point)?;
        let (lat_idx, lon_idx) = cell_indices(point.lat, point.lon)?;
        match self.bitmap.get(lat_idx, lon_idx) {
            CellState::Yes => Ok(Classification::Yes),
            CellState::No => Ok(Classification::No),
            CellState::Partially => {
                if point_in_any_polygon_spherical(point, &self.polygons) {
                    Ok(Classification::Yes)
                } else {
                    Ok(Classification::No)
                }
            }
            CellState::Water => Ok(Classification::No),
        }
    }

    pub fn classify_line(&self, line: Line) -> Result<Classification, Error> {
        validate_line(&line)?;
        if line.points.len() == 1 {
            return self.classify_point(line.points[0]);
        }

        let mut any_inside = false;
        let mut any_outside = false;

        for window in line.points.windows(2) {
            let a = window[0];
            let b = window[1];
            let relation = segment_relation(a, b, &self.polygons)?;
            match relation {
                SegmentRelation::Inside => any_inside = true,
                SegmentRelation::Crossing => {
                    return Ok(Classification::Partially);
                }
                SegmentRelation::Outside => any_outside = true,
            }
        }

        match (any_inside, any_outside) {
            (true, true) => Ok(Classification::Partially),
            (true, false) => Ok(Classification::Yes),
            (false, true) => Ok(Classification::No),
            (false, false) => Ok(Classification::No),
        }
    }

    pub fn classify_bbox(&self, bbox: Bbox) -> Result<Classification, Error> {
        validate_bbox(bbox)?;
        let poly = bbox_to_line_ring(bbox);
        let mut any_inside = false;
        let mut any_outside = false;

        for window in poly.windows(2) {
            let relation = segment_relation(window[0], window[1], &self.polygons)?;
            match relation {
                SegmentRelation::Inside => any_inside = true,
                SegmentRelation::Crossing => return Ok(Classification::Partially),
                SegmentRelation::Outside => any_outside = true,
            }
        }

        let corners = bbox_corners(bbox);
        let any_corner_inside = corners
            .iter()
            .any(|&p| point_in_any_polygon_spherical(p, &self.polygons));
        let all_corners_inside = corners
            .iter()
            .all(|&p| point_in_any_polygon_spherical(p, &self.polygons));
        let any_polygon_vertex_inside_bbox = self.polygons.iter().any(|poly| {
            poly.spherical_vertices
                .iter()
                .any(|&v| point_in_bbox_planar(v.to_point(), bbox))
        });

        if all_corners_inside && !polygon_edges_intersect_bbox(&self.polygons, bbox)? {
            return Ok(Classification::Yes);
        }
        if any_corner_inside || any_polygon_vertex_inside_bbox || any_inside {
            return Ok(Classification::Partially);
        }
        if any_outside {
            return Ok(Classification::No);
        }
        Ok(Classification::No)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum CellState {
    No,
    Yes,
    Partially,
    #[allow(dead_code)]
    Water,
}

#[derive(Debug, Clone)]
struct Bitmap {
    packed: Box<[u8]>,
}

impl Bitmap {
    fn build(polygons: &[Polygon]) -> Self {
        let mut cells = vec![CellState::No; CELL_COUNT];

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
                    let relation = cell.relation_to(poly);
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

        Self::from_states(&cells)
    }

    fn from_preprocessed(packed: &[u8]) -> Result<Self, Error> {
        if packed.len() != BITMAP_PACKED_LEN {
            return Err(Error::Parse(format!(
                "preprocessed bitmap length mismatch: got {}, expected {}",
                packed.len(),
                BITMAP_PACKED_LEN
            )));
        }
        Ok(Self {
            packed: packed.to_vec().into_boxed_slice(),
        })
    }

    fn from_states(states: &[CellState]) -> Self {
        let mut packed = vec![0u8; BITMAP_PACKED_LEN];
        for (idx, state) in states.iter().enumerate() {
            let byte_idx = idx / 4;
            let offset = (idx % 4) * 2;
            packed[byte_idx] |= (*state as u8) << offset;
        }
        Self {
            packed: packed.into_boxed_slice(),
        }
    }

    fn get(&self, lat_idx: usize, lon_idx: usize) -> CellState {
        let idx = lat_idx * LON_CELLS + lon_idx;
        let byte = self.packed[idx / 4];
        let bits = (byte >> ((idx % 4) * 2)) & 0b11;
        match bits {
            0 => CellState::No,
            1 => CellState::Yes,
            2 => CellState::Partially,
            _ => CellState::Water,
        }
    }
}

#[derive(Debug, Clone)]
struct Polygon {
    spherical_vertices: Vec<Vec3>,
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

#[derive(Debug, Clone, Copy, PartialEq)]
struct PlanarPoint {
    x: f64,
    y: f64,
}

impl PlanarPoint {
    const fn new(x: f64, y: f64) -> Self {
        Self { x, y }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
struct Vec3 {
    x: f64,
    y: f64,
    z: f64,
}

impl Vec3 {
    fn from_point(point: Point) -> Self {
        let lat = point.lat.to_radians();
        let lon = normalize_lon(point.lon).to_radians();
        let cos_lat = lat.cos();
        Self {
            x: cos_lat * lon.cos(),
            y: cos_lat * lon.sin(),
            z: lat.sin(),
        }
    }

    fn to_point(self) -> Point {
        let lon = self.y.atan2(self.x).to_degrees();
        let hyp = (self.x * self.x + self.y * self.y).sqrt();
        let lat = self.z.atan2(hyp).to_degrees();
        Point::new(lat, lon)
    }

    fn dot(self, other: Self) -> f64 {
        self.x * other.x + self.y * other.y + self.z * other.z
    }

    fn cross(self, other: Self) -> Self {
        Self {
            x: self.y * other.z - self.z * other.y,
            y: self.z * other.x - self.x * other.z,
            z: self.x * other.y - self.y * other.x,
        }
    }

    fn norm(self) -> f64 {
        self.dot(self).sqrt()
    }

    fn normalized(self) -> Option<Self> {
        let n = self.norm();
        if n < EPS {
            None
        } else {
            Some(Self {
                x: self.x / n,
                y: self.y / n,
                z: self.z / n,
            })
        }
    }

    fn scale(self, k: f64) -> Self {
        Self {
            x: self.x * k,
            y: self.y * k,
            z: self.z * k,
        }
    }

    fn add(self, other: Self) -> Self {
        Self {
            x: self.x + other.x,
            y: self.y + other.y,
            z: self.z + other.z,
        }
    }

    fn sub(self, other: Self) -> Self {
        Self {
            x: self.x - other.x,
            y: self.y - other.y,
            z: self.z - other.z,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
enum SegmentRelation {
    Inside,
    Outside,
    Crossing,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum CellRelation {
    Inside,
    Outside,
    Crossing,
}

#[derive(Debug, Clone, Copy)]
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

    fn relation_to(self, poly: &Polygon) -> CellRelation {
        let corners = self.planar_corners(poly.ref_lon);
        let inside = corners
            .iter()
            .filter(|&&c| planar_point_in_polygon(c, poly))
            .count();
        let edge_hit = polygon_intersects_cell_planar(poly, self);
        if inside == 4 && !edge_hit {
            CellRelation::Inside
        } else if inside > 0
            || edge_hit
            || poly
                .planar_vertices
                .iter()
                .any(|&v| self.contains(v, poly.ref_lon))
        {
            CellRelation::Crossing
        } else {
            CellRelation::Outside
        }
    }

    fn contains(self, point: PlanarPoint, ref_lon: f64) -> bool {
        let (min_lat, min_lon, max_lat, max_lon) = self.bounds();
        let min_lon = wrap_to_reference(min_lon, ref_lon);
        let max_lon = wrap_to_reference(max_lon, ref_lon);
        let x = point.x;
        let y = point.y;
        let lon_ok = if min_lon <= max_lon {
            x >= min_lon - EPS && x <= max_lon + EPS
        } else {
            x >= min_lon - EPS || x <= max_lon + EPS
        };
        lon_ok && y >= min_lat - EPS && y <= max_lat + EPS
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
    if let Some(&first) = poly.planar_vertices.first() {
        if let Some(&last) = poly.planar_vertices.last() {
            polygon_edges.push((last, first));
        }
    }
    for &(a, b) in &edges {
        for &(c, d) in &polygon_edges {
            if planar_segments_intersect(a, b, c, d) {
                return true;
            }
        }
    }
    if poly
        .planar_vertices
        .iter()
        .any(|&v| cell.contains(v, poly.ref_lon))
    {
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

fn planar_segments_intersect(
    a1: PlanarPoint,
    a2: PlanarPoint,
    b1: PlanarPoint,
    b2: PlanarPoint,
) -> bool {
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

fn segment_relation(a: Point, b: Point, polygons: &[Polygon]) -> Result<SegmentRelation, Error> {
    if a == b {
        return if point_in_any_polygon_spherical(a, polygons) {
            Ok(SegmentRelation::Inside)
        } else {
            Ok(SegmentRelation::Outside)
        };
    }

    let inside_a = point_in_any_polygon_spherical(a, polygons);
    let inside_b = point_in_any_polygon_spherical(b, polygons);
    let midpoint = interpolate_gc(a, b, 0.5);
    let inside_mid = point_in_any_polygon_spherical(midpoint, polygons);
    let intersects = segment_intersects_any_boundary(a, b, polygons)?;

    if intersects {
        return Ok(SegmentRelation::Crossing);
    }
    if inside_a && inside_b && inside_mid {
        Ok(SegmentRelation::Inside)
    } else if inside_a || inside_b || inside_mid {
        Ok(SegmentRelation::Crossing)
    } else {
        Ok(SegmentRelation::Outside)
    }
}

fn segment_intersects_any_boundary(
    a: Point,
    b: Point,
    polygons: &[Polygon],
) -> Result<bool, Error> {
    let va = Vec3::from_point(a);
    let vb = Vec3::from_point(b);
    for poly in polygons {
        let verts = &poly.spherical_vertices;
        for i in 0..verts.len() {
            let c = verts[i];
            let d = verts[(i + 1) % verts.len()];
            if spherical_segments_intersect(va, vb, c, d)? {
                return Ok(true);
            }
        }
    }
    Ok(false)
}

fn point_in_any_polygon_spherical(point: Point, polygons: &[Polygon]) -> bool {
    polygons
        .iter()
        .any(|poly| point_in_polygon_spherical(point, poly))
}

fn point_in_polygon_spherical(point: Point, poly: &Polygon) -> bool {
    let p = Vec3::from_point(point);
    let verts = &poly.spherical_vertices;
    if verts.len() < 3 {
        return false;
    }
    let mut total = 0.0;
    for i in 0..verts.len() {
        let a = verts[i];
        let b = verts[(i + 1) % verts.len()];
        if point_on_spherical_segment(p, a, b) {
            return true;
        }
        let pa = tangent_projection(p, a);
        let pb = tangent_projection(p, b);
        let angle = signed_angle(pa, pb, p);
        total += angle;
    }
    total.abs() > PI
}

fn tangent_projection(p: Vec3, v: Vec3) -> Vec3 {
    let proj = v.sub(p.scale(p.dot(v)));
    proj.normalized().unwrap_or_else(|| {
        // Fallback to a deterministic tangent direction if the projection is tiny.
        let mut axis = if p.x.abs() < 0.9 {
            Vec3 {
                x: 1.0,
                y: 0.0,
                z: 0.0,
            }
        } else {
            Vec3 {
                x: 0.0,
                y: 1.0,
                z: 0.0,
            }
        };
        axis = axis.sub(p.scale(p.dot(axis)));
        axis.normalized().unwrap_or(axis)
    })
}

fn signed_angle(a: Vec3, b: Vec3, p: Vec3) -> f64 {
    let cross = a.cross(b);
    cross.dot(p).atan2(a.dot(b))
}

fn point_on_spherical_segment(p: Vec3, a: Vec3, b: Vec3) -> bool {
    let ab = a.cross(b);
    if ab.norm() < EPS {
        return (p.sub(a)).norm() < 1e-8 || (p.sub(b)).norm() < 1e-8;
    }
    let dist = p.dot(ab.normalized().unwrap());
    if dist.abs() > 1e-8 {
        return false;
    }
    let angle_ab = angular_distance(a, b);
    let angle_ap = angular_distance(a, p);
    let angle_pb = angular_distance(p, b);
    (angle_ap + angle_pb - angle_ab).abs() < 1e-7
}

fn spherical_segments_intersect(a: Vec3, b: Vec3, c: Vec3, d: Vec3) -> Result<bool, Error> {
    if point_on_spherical_segment(a, c, d)
        || point_on_spherical_segment(b, c, d)
        || point_on_spherical_segment(c, a, b)
        || point_on_spherical_segment(d, a, b)
    {
        return Ok(true);
    }
    let n1 = a.cross(b);
    let n2 = c.cross(d);
    let intersection = n1.cross(n2);
    if intersection.norm() < EPS {
        return Ok(false);
    }
    let x1 = intersection
        .normalized()
        .ok_or_else(|| Error::InvalidGeometry("failed to normalize intersection".into()))?;
    let x2 = x1.scale(-1.0);
    Ok(on_both_minor_arcs(a, b, c, d, x1) || on_both_minor_arcs(a, b, c, d, x2))
}

fn on_both_minor_arcs(a: Vec3, b: Vec3, c: Vec3, d: Vec3, x: Vec3) -> bool {
    on_minor_arc(a, b, x) && on_minor_arc(c, d, x)
}

fn on_minor_arc(a: Vec3, b: Vec3, x: Vec3) -> bool {
    let ab = angular_distance(a, b);
    let ax = angular_distance(a, x);
    let xb = angular_distance(x, b);
    (ax + xb - ab).abs() < 1e-7
}

fn angular_distance(a: Vec3, b: Vec3) -> f64 {
    let denom = a.norm() * b.norm();
    if denom < EPS {
        0.0
    } else {
        (a.dot(b) / denom).clamp(-1.0, 1.0).acos()
    }
}

fn interpolate_gc(a: Point, b: Point, t: f64) -> Point {
    let va = Vec3::from_point(a);
    let vb = Vec3::from_point(b);
    let omega = angular_distance(va, vb);
    if omega < EPS {
        return a;
    }
    let sin_omega = omega.sin();
    let s1 = ((1.0 - t) * omega).sin() / sin_omega;
    let s2 = (t * omega).sin() / sin_omega;
    let v = va.scale(s1).add(vb.scale(s2)).normalized().unwrap_or(va);
    v.to_point()
}

fn bbox_to_line_ring(bbox: Bbox) -> Vec<Point> {
    let (min_lat, max_lat) = bbox.normalized_lats();
    if bbox.min_lon <= bbox.max_lon {
        vec![
            Point::new(min_lat, bbox.min_lon),
            Point::new(min_lat, bbox.max_lon),
            Point::new(max_lat, bbox.max_lon),
            Point::new(max_lat, bbox.min_lon),
            Point::new(min_lat, bbox.min_lon),
        ]
    } else {
        vec![
            Point::new(min_lat, bbox.min_lon),
            Point::new(min_lat, bbox.max_lon + 360.0),
            Point::new(max_lat, bbox.max_lon + 360.0),
            Point::new(max_lat, bbox.min_lon),
            Point::new(min_lat, bbox.min_lon),
        ]
    }
}

fn bbox_corners(bbox: Bbox) -> [Point; 4] {
    let (min_lat, max_lat) = bbox.normalized_lats();
    if bbox.min_lon <= bbox.max_lon {
        [
            Point::new(min_lat, bbox.min_lon),
            Point::new(min_lat, bbox.max_lon),
            Point::new(max_lat, bbox.max_lon),
            Point::new(max_lat, bbox.min_lon),
        ]
    } else {
        [
            Point::new(min_lat, bbox.min_lon),
            Point::new(min_lat, bbox.max_lon + 360.0),
            Point::new(max_lat, bbox.max_lon + 360.0),
            Point::new(max_lat, bbox.min_lon),
        ]
    }
}

fn point_in_bbox_planar(point: Point, bbox: Bbox) -> bool {
    let (min_lat, max_lat) = bbox.normalized_lats();
    if bbox.min_lon <= bbox.max_lon {
        point.lat >= min_lat - EPS
            && point.lat <= max_lat + EPS
            && point.lon >= bbox.min_lon - EPS
            && point.lon <= bbox.max_lon + EPS
    } else {
        (point.lat >= min_lat - EPS && point.lat <= max_lat + EPS)
            && (point.lon >= bbox.min_lon - EPS || point.lon <= bbox.max_lon + EPS)
    }
}

fn polygon_edges_intersect_bbox(polygons: &[Polygon], bbox: Bbox) -> Result<bool, Error> {
    let ring = bbox_to_line_ring(bbox);
    for poly in polygons {
        let ring3 = poly
            .spherical_vertices
            .iter()
            .map(|&v| v.to_point())
            .collect::<Vec<_>>();
        for pseg in ring.windows(2) {
            let a = Vec3::from_point(pseg[0]);
            let b = Vec3::from_point(pseg[1]);
            for w in ring3.windows(2) {
                let c = Vec3::from_point(w[0]);
                let d = Vec3::from_point(w[1]);
                if spherical_segments_intersect(a, b, c, d)? {
                    return Ok(true);
                }
            }
            if let (Some(&first), Some(&last)) = (ring3.first(), ring3.last()) {
                if spherical_segments_intersect(
                    a,
                    b,
                    Vec3::from_point(last),
                    Vec3::from_point(first),
                )? {
                    return Ok(true);
                }
            }
        }
    }
    Ok(false)
}

fn validate_point(point: Point) -> Result<(), Error> {
    if !point.lat.is_finite() || !point.lon.is_finite() {
        return Err(Error::InvalidGeometry("point must be finite".into()));
    }
    if point.lat < -90.0 || point.lat > 90.0 {
        return Err(Error::InvalidGeometry("latitude out of range".into()));
    }
    if point.lon < -540.0 || point.lon > 540.0 {
        return Err(Error::InvalidGeometry("longitude out of range".into()));
    }
    Ok(())
}

fn validate_line(line: &Line) -> Result<(), Error> {
    if line.points.is_empty() {
        return Err(Error::InvalidGeometry(
            "line must contain at least one point".into(),
        ));
    }
    for p in &line.points {
        validate_point(*p)?;
    }
    Ok(())
}

fn validate_bbox(bbox: Bbox) -> Result<(), Error> {
    validate_point(Point::new(bbox.min_lat, bbox.min_lon))?;
    validate_point(Point::new(bbox.max_lat, bbox.max_lon))?;
    Ok(())
}

fn parse_osm_polygons(input: &str) -> Result<Vec<Polygon>, Error> {
    let normalized = input.replace("><", ">\n<");
    let mut nodes = std::collections::HashMap::<i64, Point>::new();
    let mut polygons = Vec::new();
    let mut current_way: Option<Vec<i64>> = None;

    for raw_line in normalized.lines() {
        let line = raw_line.trim();
        if line.starts_with("<node ") {
            let id = attr_i64(line, "id")?;
            let lat = attr_f64(line, "lat")?;
            let lon = attr_f64(line, "lon")?;
            nodes.insert(id, Point::new(lat, lon));
        } else if line.starts_with("<way ") {
            current_way = Some(Vec::new());
        } else if line.starts_with("<nd ") {
            let ref_id = attr_i64(line, "ref")?;
            if let Some(ref mut refs) = current_way {
                refs.push(ref_id);
            } else {
                return Err(Error::Parse("nd outside of way".into()));
            }
        } else if line.starts_with("</way>") {
            let refs = current_way
                .take()
                .ok_or_else(|| Error::Parse("unexpected </way>".into()))?;
            let mut points = Vec::with_capacity(refs.len());
            for ref_id in refs {
                let point = nodes
                    .get(&ref_id)
                    .ok_or_else(|| Error::Parse(format!("missing node reference {ref_id}")))?;
                points.push(*point);
            }
            if points.len() < 3 {
                continue;
            }
            let poly = polygon_from_ring(points)?;
            polygons.push(poly);
        }
    }

    Ok(polygons)
}

fn polygon_from_ring(mut points: Vec<Point>) -> Result<Polygon, Error> {
    if points.len() < 3 {
        return Err(Error::InvalidGeometry(
            "polygon ring needs at least 3 points".into(),
        ));
    }
    if points.first() != points.last() {
        points.push(*points.first().unwrap());
    }
    let mut spherical_vertices = Vec::new();
    let mut planar_vertices = Vec::new();
    let ref_lon = points[0].lon;
    let mut min_lat = f64::INFINITY;
    let mut max_lat = f64::NEG_INFINITY;
    for p in points.iter().take(points.len() - 1) {
        min_lat = min_lat.min(p.lat);
        max_lat = max_lat.max(p.lat);
        spherical_vertices.push(Vec3::from_point(*p));
        planar_vertices.push(PlanarPoint::new(wrap_to_reference(p.lon, ref_lon), p.lat));
    }
    Ok(Polygon {
        spherical_vertices,
        planar_vertices,
        ref_lon,
        min_lat,
        max_lat,
    })
}

fn attr_i64(line: &str, key: &str) -> Result<i64, Error> {
    attr_value(line, key)?
        .parse::<i64>()
        .map_err(|e| Error::Parse(format!("failed to parse {key}: {e}")))
}

fn attr_f64(line: &str, key: &str) -> Result<f64, Error> {
    attr_value(line, key)?
        .parse::<f64>()
        .map_err(|e| Error::Parse(format!("failed to parse {key}: {e}")))
}

fn attr_value<'a>(line: &'a str, key: &str) -> Result<&'a str, Error> {
    let needle = format!("{key}='");
    let start = line
        .find(&needle)
        .ok_or_else(|| Error::Parse(format!("missing attribute {key}")))?;
    let start = start + needle.len();
    let end = line[start..]
        .find('\'')
        .ok_or_else(|| Error::Parse(format!("unterminated attribute {key}")))?;
    Ok(&line[start..start + end])
}

fn normalize_lon(lon: f64) -> f64 {
    let mut x = lon % 360.0;
    if x >= 180.0 {
        x -= 360.0;
    }
    if x < -180.0 {
        x += 360.0;
    }
    x
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

fn cell_indices(lat: f64, lon: f64) -> Result<(usize, usize), Error> {
    let lat_idx = lat_to_index(lat).ok_or_else(|| Error::InvalidGeometry("bad latitude".into()))?;
    let lon = normalize_lon(lon);
    let mut lon_idx = ((lon + 180.0) / GRID_STEP).floor() as isize;
    if lon_idx < 0 {
        lon_idx = 0;
    }
    if lon_idx as usize >= LON_CELLS {
        lon_idx = (LON_CELLS - 1) as isize;
    }
    Ok((lat_idx, lon_idx as usize))
}

#[cfg(test)]
mod tests {
    use super::*;

    static INDEX: OnceLock<DrivingAreaIndex> = OnceLock::new();

    fn index() -> &'static DrivingAreaIndex {
        INDEX.get_or_init(|| DrivingAreaIndex::from_default_osm().expect("failed to build index"))
    }

    #[test]
    fn parses_osm_file() {
        let idx = index();
        assert!(!idx.polygons.is_empty());
        assert_eq!(idx.polygons.len(), 23);
    }

    #[test]
    fn point_in_london_is_yes() {
        let idx = index();
        assert_eq!(
            idx.classify_point(Point::new(51.5074, -0.1278)).unwrap(),
            Classification::Yes
        );
    }

    #[test]
    fn point_in_france_is_no() {
        let idx = index();
        assert_eq!(
            idx.classify_point(Point::new(48.8566, 2.3522)).unwrap(),
            Classification::No
        );
    }

    #[test]
    fn point_on_boundary_is_yes() {
        let idx = index();
        assert_eq!(
            idx.classify_point(Point::new(22.5293, 114.0823)).unwrap(),
            Classification::Yes
        );
    }

    #[test]
    fn line_inside_is_yes() {
        let idx = index();
        let line = Line::new(vec![Point::new(51.50, -0.15), Point::new(51.52, -0.10)]);
        assert_eq!(idx.classify_line(line).unwrap(), Classification::Yes);
    }

    #[test]
    fn line_outside_is_no() {
        let idx = index();
        let line = Line::new(vec![Point::new(48.85, 2.30), Point::new(48.90, 2.40)]);
        assert_eq!(idx.classify_line(line).unwrap(), Classification::No);
    }

    #[test]
    fn line_crossing_area_is_partial() {
        let idx = index();
        let line = Line::new(vec![
            Point::new(22.5293, 114.0823),
            Point::new(22.60, 114.20),
        ]);
        assert_eq!(idx.classify_line(line).unwrap(), Classification::Partially);
    }

    #[test]
    fn bbox_inside_is_yes() {
        let idx = index();
        let bbox = Bbox::new(51.48, -0.20, 51.52, -0.10);
        assert_eq!(idx.classify_bbox(bbox).unwrap(), Classification::Yes);
    }

    #[test]
    fn bbox_outside_is_no() {
        let idx = index();
        let bbox = Bbox::new(48.80, 2.20, 48.90, 2.30);
        assert_eq!(idx.classify_bbox(bbox).unwrap(), Classification::No);
    }

    #[test]
    fn bbox_crossing_area_is_partial() {
        let idx = index();
        let bbox = Bbox::new(22.50, 114.05, 22.56, 114.10);
        assert_eq!(idx.classify_bbox(bbox).unwrap(), Classification::Partially);
    }

    #[test]
    fn antimeridian_point_support() {
        let idx = index();
        let p = Point::new(-16.0, 179.98);
        let result = idx.classify_point(p).unwrap();
        assert!(matches!(result, Classification::Yes | Classification::No));
    }

    #[test]
    fn zero_length_line_behaves_like_point() {
        let idx = index();
        let p = Point::new(51.5074, -0.1278);
        let line = Line::new(vec![p]);
        assert_eq!(
            idx.classify_line(line).unwrap(),
            idx.classify_point(p).unwrap()
        );
    }

    #[test]
    fn degenerate_bbox_behaves_like_point() {
        let idx = index();
        let p = Point::new(51.5074, -0.1278);
        let bbox = Bbox::new(p.lat, p.lon, p.lat, p.lon);
        assert_eq!(
            idx.classify_bbox(bbox).unwrap(),
            idx.classify_point(p).unwrap()
        );
    }

    #[test]
    fn invalid_point_returns_error() {
        let idx = index();
        let err = idx.classify_point(Point::new(123.0, 0.0)).unwrap_err();
        assert!(matches!(err, Error::InvalidGeometry(_)));
    }

    #[test]
    fn osm_parser_rejects_missing_node() {
        let bad =
            "<osm><node id='1' lat='0' lon='0'/><way id='2'><nd ref='1'/><nd ref='2'/></way></osm>";
        assert!(parse_osm_polygons(bad).is_err());
    }

    #[test]
    fn grid_index_clamps_poles() {
        assert_eq!(lat_to_index(90.0), Some(LAT_CELLS - 1));
        assert_eq!(lat_to_index(-90.0), Some(0));
    }
}
