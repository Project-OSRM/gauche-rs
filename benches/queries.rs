use std::hint::black_box;
use std::sync::OnceLock;

use criterion::{BatchSize, Criterion, criterion_group, criterion_main};
use gauche::{Bbox, DrivingAreaIndex, Line, Point};

static INDEX: OnceLock<DrivingAreaIndex> = OnceLock::new();

fn index() -> &'static DrivingAreaIndex {
    INDEX
        .get_or_init(|| DrivingAreaIndex::from_default_osm().expect("failed to load default index"))
}

fn point_cases() -> [(&'static str, Point); 3] {
    [
        ("yes", Point::new(51.5074, -0.1278)),
        ("no", Point::new(48.8566, 2.3522)),
        ("boundary", Point::new(22.5293, 114.0823)),
    ]
}

fn line_cases() -> [(&'static str, Line); 3] {
    [
        (
            "yes",
            Line::new(vec![Point::new(51.50, -0.15), Point::new(51.52, -0.10)]),
        ),
        (
            "no",
            Line::new(vec![Point::new(48.85, 2.30), Point::new(48.90, 2.40)]),
        ),
        (
            "partial",
            Line::new(vec![
                Point::new(22.5293, 114.0823),
                Point::new(22.60, 114.20),
            ]),
        ),
    ]
}

fn bbox_cases() -> [(&'static str, Bbox); 3] {
    [
        ("yes", Bbox::new(51.48, -0.20, 51.52, -0.10)),
        ("no", Bbox::new(48.80, 2.20, 48.90, 2.30)),
        ("partial", Bbox::new(22.50, 114.05, 22.56, 114.10)),
    ]
}

fn bench_points(c: &mut Criterion) {
    let index = index();
    let mut group = c.benchmark_group("points");

    for (name, point) in point_cases() {
        group.bench_function(name, |b| {
            b.iter(|| {
                black_box(index)
                    .classify_point(black_box(point))
                    .expect("point classification")
            });
        });
    }

    group.finish();
}

fn bench_lines(c: &mut Criterion) {
    let index = index();
    let mut group = c.benchmark_group("lines");

    for (name, line) in line_cases() {
        group.bench_function(name, |b| {
            b.iter_batched(
                || line.clone(),
                |line| {
                    black_box(index)
                        .classify_line(black_box(line))
                        .expect("line classification")
                },
                BatchSize::SmallInput,
            );
        });
    }

    group.finish();
}

fn bench_bboxes(c: &mut Criterion) {
    let index = index();
    let mut group = c.benchmark_group("bboxes");

    for (name, bbox) in bbox_cases() {
        group.bench_function(name, |b| {
            b.iter(|| {
                black_box(index)
                    .classify_bbox(black_box(bbox))
                    .expect("bbox classification")
            });
        });
    }

    group.finish();
}

fn bench_query_sets(c: &mut Criterion) {
    let _ = index();
    bench_points(c);
    bench_lines(c);
    bench_bboxes(c);
}

criterion_group! {
    name = benches;
    config = Criterion::default().sample_size(20);
    targets = bench_query_sets
}
criterion_main!(benches);
