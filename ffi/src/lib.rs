use std::slice;

use gauche::{Bbox, Classification, DrivingAreaIndex, Line, Point};

pub type GaucheHandle = u32;

pub const GAUCHE_STATUS_OK: u32 = 0;
pub const GAUCHE_STATUS_NULL_HANDLE: u32 = 1;
pub const GAUCHE_STATUS_NULL_OUTPUT: u32 = 2;
pub const GAUCHE_STATUS_INVALID_INPUT: u32 = 3;
pub const GAUCHE_STATUS_INTERNAL_ERROR: u32 = 4;

pub const GAUCHE_CLASSIFICATION_NO: u32 = 0;
pub const GAUCHE_CLASSIFICATION_YES: u32 = 1;
pub const GAUCHE_CLASSIFICATION_PARTIALLY: u32 = 2;

struct Instance {
    index: DrivingAreaIndex,
}

fn handle_to_instance(handle: GaucheHandle) -> Option<*mut Instance> {
    if handle == 0 {
        return None;
    }
    Some(handle as *mut Instance)
}

fn write_classification(out: *mut u32, classification: Classification) {
    unsafe {
        *out = match classification {
            Classification::No => GAUCHE_CLASSIFICATION_NO,
            Classification::Yes => GAUCHE_CLASSIFICATION_YES,
            Classification::Partially => GAUCHE_CLASSIFICATION_PARTIALLY,
        };
    }
}

#[unsafe(no_mangle)]
pub extern "C" fn gauche_create() -> GaucheHandle {
    match DrivingAreaIndex::from_default_osm() {
        Ok(index) => {
            let instance = Box::new(Instance { index });
            Box::into_raw(instance) as GaucheHandle
        }
        Err(_) => 0,
    }
}

#[unsafe(no_mangle)]
pub extern "C" fn gauche_destroy(handle: GaucheHandle) {
    if handle == 0 {
        return;
    }
    unsafe {
        drop(Box::from_raw(handle as *mut Instance));
    }
}

#[unsafe(no_mangle)]
pub extern "C" fn gauche_classify_point(
    handle: GaucheHandle,
    lat: f64,
    lon: f64,
    out_classification: *mut u32,
) -> u32 {
    let Some(instance) = handle_to_instance(handle) else {
        return GAUCHE_STATUS_NULL_HANDLE;
    };
    if out_classification.is_null() {
        return GAUCHE_STATUS_NULL_OUTPUT;
    }
    let instance = unsafe { &*instance };
    match instance.index.classify_point(Point::new(lat, lon)) {
        Ok(classification) => {
            write_classification(out_classification, classification);
            GAUCHE_STATUS_OK
        }
        Err(gauche::Error::InvalidGeometry(_)) => GAUCHE_STATUS_INVALID_INPUT,
        Err(_) => GAUCHE_STATUS_INTERNAL_ERROR,
    }
}

#[unsafe(no_mangle)]
pub extern "C" fn gauche_classify_bbox(
    handle: GaucheHandle,
    min_lat: f64,
    min_lon: f64,
    max_lat: f64,
    max_lon: f64,
    out_classification: *mut u32,
) -> u32 {
    let Some(instance) = handle_to_instance(handle) else {
        return GAUCHE_STATUS_NULL_HANDLE;
    };
    if out_classification.is_null() {
        return GAUCHE_STATUS_NULL_OUTPUT;
    }
    let instance = unsafe { &*instance };
    match instance
        .index
        .classify_bbox(Bbox::new(min_lat, min_lon, max_lat, max_lon))
    {
        Ok(classification) => {
            write_classification(out_classification, classification);
            GAUCHE_STATUS_OK
        }
        Err(gauche::Error::InvalidGeometry(_)) => GAUCHE_STATUS_INVALID_INPUT,
        Err(_) => GAUCHE_STATUS_INTERNAL_ERROR,
    }
}

#[unsafe(no_mangle)]
pub extern "C" fn gauche_classify_line(
    handle: GaucheHandle,
    coords: *const f64,
    point_count: u32,
    out_classification: *mut u32,
) -> u32 {
    let Some(instance) = handle_to_instance(handle) else {
        return GAUCHE_STATUS_NULL_HANDLE;
    };
    if out_classification.is_null() {
        return GAUCHE_STATUS_NULL_OUTPUT;
    }
    let Some(coord_len) = point_count.checked_mul(2) else {
        return GAUCHE_STATUS_INVALID_INPUT;
    };
    if coord_len == 0 {
        return GAUCHE_STATUS_INVALID_INPUT;
    }
    if coords.is_null() {
        return GAUCHE_STATUS_INVALID_INPUT;
    }
    let coords = unsafe { slice::from_raw_parts(coords, coord_len as usize) };
    let mut points = Vec::with_capacity(point_count as usize);
    for chunk in coords.chunks_exact(2) {
        points.push(Point::new(chunk[0], chunk[1]));
    }
    let instance = unsafe { &*instance };
    match instance.index.classify_line(Line::new(points)) {
        Ok(classification) => {
            write_classification(out_classification, classification);
            GAUCHE_STATUS_OK
        }
        Err(gauche::Error::InvalidGeometry(_)) => GAUCHE_STATUS_INVALID_INPUT,
        Err(_) => GAUCHE_STATUS_INTERNAL_ERROR,
    }
}
