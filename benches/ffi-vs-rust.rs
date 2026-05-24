use std::hint::black_box;
use std::sync::OnceLock;

use criterion::{BatchSize, Criterion, criterion_group, criterion_main};
use gauche::{Bbox, DrivingAreaIndex, Line, Point};

#[repr(C)]
struct WasmFuncExport {
    func: Option<unsafe extern "C" fn()>,
    name: *mut core::ffi::c_char,
}

#[repr(C)]
struct WasmModuleInstance {
    func_exports: *mut WasmFuncExport,
    resolve_imports: Option<
        unsafe extern "C" fn(
            *const core::ffi::c_char,
            *const core::ffi::c_char,
        ) -> *mut core::ffi::c_void,
    >,
    new_child: Option<unsafe extern "C" fn(*mut WasmModuleInstance) -> *mut WasmModuleInstance>,
}

#[repr(C)]
struct WasmMemory {
    data: *mut u8,
    size: u32,
    pages: u32,
    max_pages: u32,
    shared: bool,
    futex: *mut core::ffi::c_void,
    futex_free: Option<unsafe extern "C" fn(*mut core::ffi::c_void)>,
}

#[repr(C)]
struct WasmTable {
    data: *mut core::ffi::c_void,
    size: u32,
    max_size: u32,
}

#[repr(C)]
struct GaucheFfiInstance {
    common: WasmModuleInstance,
    m0: *mut WasmMemory,
    t0: WasmTable,
    g0: u32,
    g1: u32,
    g2: u32,
}

unsafe extern "C" {
    fn gauche_ffiInstantiate(
        instance: *mut GaucheFfiInstance,
        resolve_imports: Option<
            unsafe extern "C" fn(
                *const core::ffi::c_char,
                *const core::ffi::c_char,
            ) -> *mut core::ffi::c_void,
        >,
    );
    fn gauche_ffiFreeInstance(instance: *mut GaucheFfiInstance);
    fn gauche_ffi_memory(instance: *mut GaucheFfiInstance) -> *mut WasmMemory;
    fn gauche_ffi_gauche_create(instance: *mut GaucheFfiInstance) -> u32;
    fn gauche_ffi_gauche_destroy(instance: *mut GaucheFfiInstance, handle: u32);
    fn gauche_ffi_gauche_classify_point(
        instance: *mut GaucheFfiInstance,
        handle: u32,
        lat: f64,
        lon: f64,
        out_classification: u32,
    ) -> u32;
    fn gauche_ffi_gauche_classify_line(
        instance: *mut GaucheFfiInstance,
        handle: u32,
        coords: u32,
        point_count: u32,
        out_classification: u32,
    ) -> u32;
    fn gauche_ffi_gauche_classify_bbox(
        instance: *mut GaucheFfiInstance,
        handle: u32,
        min_lat: f64,
        min_lon: f64,
        max_lat: f64,
        max_lon: f64,
        out_classification: u32,
    ) -> u32;
}

struct CApiHandle {
    instance: *mut GaucheFfiInstance,
    handle: u32,
}

unsafe impl Send for CApiHandle {}
unsafe impl Sync for CApiHandle {}

impl Drop for CApiHandle {
    fn drop(&mut self) {
        unsafe {
            if !self.instance.is_null() {
                if self.handle != 0 {
                    gauche_ffi_gauche_destroy(self.instance, self.handle);
                }
                gauche_ffiFreeInstance(self.instance);
                drop(Box::from_raw(self.instance));
            }
        }
    }
}

static RUST_INDEX: OnceLock<DrivingAreaIndex> = OnceLock::new();
static C_INDEX: OnceLock<CApiHandle> = OnceLock::new();

fn rust_index() -> &'static DrivingAreaIndex {
    RUST_INDEX.get_or_init(|| DrivingAreaIndex::from_default_osm().expect("load rust index"))
}

fn c_index() -> &'static CApiHandle {
    C_INDEX.get_or_init(|| {
        let mut instance = Box::<GaucheFfiInstance>::new(unsafe { std::mem::zeroed() });
        unsafe {
            gauche_ffiInstantiate(&mut *instance, None);
        }
        let ptr = Box::into_raw(instance);
        let handle = unsafe { gauche_ffi_gauche_create(ptr) };
        assert!(handle != 0, "create c api index");
        CApiHandle {
            instance: ptr,
            handle,
        }
    })
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

fn write_points(memory: &mut WasmMemory, base: u32, points: &[Point]) {
    let dst = unsafe { memory.data.add(base as usize) };
    for (i, point) in points.iter().enumerate() {
        let offset = i * 16;
        let lat = point.lat.to_le_bytes();
        let lon = point.lon.to_le_bytes();
        unsafe {
            std::ptr::copy_nonoverlapping(lat.as_ptr(), dst.add(offset), 8);
            std::ptr::copy_nonoverlapping(lon.as_ptr(), dst.add(offset + 8), 8);
        }
    }
}

fn read_u32(memory: &WasmMemory, addr: u32) -> u32 {
    unsafe { *(memory.data.add(addr as usize) as *const u32) }
}

struct PreparedLine {
    points: Vec<Point>,
    coord_addr: u32,
    out_addr: u32,
}

fn bench_points(c: &mut Criterion) {
    let rust = rust_index();
    let c_api = c_index();
    let mut group = c.benchmark_group("points");
    for (name, point) in point_cases() {
        group.bench_function(format!("rust/{name}"), |b| {
            b.iter(|| {
                black_box(rust)
                    .classify_point(black_box(point))
                    .expect("rust point")
            });
        });
        group.bench_function(format!("ffi/{name}"), |b| {
            b.iter(|| {
                let out_addr = unsafe { (*c_api.instance).g0 } + 1024;
                let status = unsafe {
                    gauche_ffi_gauche_classify_point(
                        c_api.instance,
                        c_api.handle,
                        black_box(point.lat),
                        black_box(point.lon),
                        out_addr,
                    )
                };
                let memory = unsafe { &*gauche_ffi_memory(c_api.instance) };
                let out = read_u32(memory, out_addr);
                black_box((status, out))
            });
        });
    }
    group.finish();
}

fn bench_lines(c: &mut Criterion) {
    let rust = rust_index();
    let c_api = c_index();
    let mut group = c.benchmark_group("lines");
    for (name, line) in line_cases() {
        group.bench_function(format!("rust/{name}"), |b| {
            b.iter_batched(
                || line.clone(),
                |line| {
                    black_box(rust)
                        .classify_line(black_box(line))
                        .expect("rust line")
                },
                BatchSize::SmallInput,
            );
        });
        group.bench_function(format!("ffi/{name}"), |b| {
            b.iter_batched(
                || {
                    let memory = unsafe { &mut *gauche_ffi_memory(c_api.instance) };
                    let coord_addr = unsafe { (*c_api.instance).g0 };
                    let out_addr = coord_addr + 1024;
                    let points = line.points.clone();
                    write_points(memory, coord_addr, &points);
                    PreparedLine {
                        points,
                        coord_addr,
                        out_addr,
                    }
                },
                |prepared| {
                    let status = unsafe {
                        gauche_ffi_gauche_classify_line(
                            c_api.instance,
                            c_api.handle,
                            prepared.coord_addr,
                            prepared.points.len() as u32,
                            prepared.out_addr,
                        )
                    };
                    let memory = unsafe { &*gauche_ffi_memory(c_api.instance) };
                    let out = read_u32(memory, prepared.out_addr);
                    black_box((status, out))
                },
                BatchSize::SmallInput,
            );
        });
    }
    group.finish();
}

fn bench_bboxes(c: &mut Criterion) {
    let rust = rust_index();
    let c_api = c_index();
    let mut group = c.benchmark_group("bboxes");
    for (name, bbox) in bbox_cases() {
        group.bench_function(format!("rust/{name}"), |b| {
            b.iter(|| {
                black_box(rust)
                    .classify_bbox(black_box(bbox))
                    .expect("rust bbox")
            });
        });
        group.bench_function(format!("ffi/{name}"), |b| {
            b.iter(|| {
                let out_addr = unsafe { (*c_api.instance).g0 } + 1024;
                let status = unsafe {
                    gauche_ffi_gauche_classify_bbox(
                        c_api.instance,
                        c_api.handle,
                        black_box(bbox.min_lat),
                        black_box(bbox.min_lon),
                        black_box(bbox.max_lat),
                        black_box(bbox.max_lon),
                        out_addr,
                    )
                };
                let memory = unsafe { &*gauche_ffi_memory(c_api.instance) };
                let out = read_u32(memory, out_addr);
                black_box((status, out))
            });
        });
    }
    group.finish();
}

fn compare(c: &mut Criterion) {
    bench_points(c);
    bench_lines(c);
    bench_bboxes(c);
}

criterion_group! {
    name = benches;
    config = Criterion::default().sample_size(20);
    targets = compare
}
criterion_main!(benches);
