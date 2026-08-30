/**
 * gauche-rs — Left-hand traffic area classifier (WASM).
 *
 * Usage:
 *   import { init, classifyPoint, Classification } from 'gauche-rs';
 *   await init();
 *   const result = classifyPoint(51.5074, -0.1278);
 *   // result === Classification.YES
 */

/** @enum {number} */
export const Classification = Object.freeze({
  NO: 0,
  YES: 1,
  PARTIALLY: 2,
});

// ––– Private state –––

/** @type {WebAssembly.Exports | null} */
let _exports = null;
/** @type {WebAssembly.Memory | null} */
let _memory = null;
let _initPromise = null;

// ––– Public API –––

/**
 * Initialise the WASM module. Safe to call multiple times — subsequent calls
 * return the cached promise.
 *
 * @param {string | URL} [wasmUrl] — URL/path to gauche_rs.wasm.
 *   Defaults to `./gauche_rs.wasm` resolved relative to this module.
 * @returns {Promise<void>}
 */
export async function init(wasmUrl) {
  if (_initPromise) return _initPromise;

  _initPromise = (async () => {
    if (!wasmUrl) {
      // `new URL(..., import.meta.url)` is the most bundler-agnostic way to
      // reference a co-located asset — works in Vite, Webpack, Rollup, and
      // native ES modules in the browser.
      wasmUrl = new URL('./gauche_rs.wasm', import.meta.url).href;
    }

    const response = await fetch(wasmUrl);
    if (!response.ok) {
      throw new Error(`gauche-rs: failed to fetch WASM from ${wasmUrl} (HTTP ${response.status})`);
    }

    // Use instantiateStreaming when possible (no Content-Type sniffing issues),
    // fall back to buffer instantiation.
    let instance;
    const contentType = response.headers.get('Content-Type') || '';
    if (contentType.includes('application/wasm') || wasmUrl.endsWith('.wasm')) {
      try {
        ({ instance } = await WebAssembly.instantiateStreaming(response, {}));
      } catch (_) {
        const bytes = await response.arrayBuffer();
        ({ instance } = await WebAssembly.instantiate(bytes, {}));
      }
    } else {
      const bytes = await response.arrayBuffer();
      ({ instance } = await WebAssembly.instantiate(bytes, {}));
    }

    _exports = instance.exports;
    _memory = _exports.memory || null;

    if (typeof _exports.gauche_alloc !== 'function' || typeof _exports.gauche_free !== 'function') {
      throw new Error(
        'gauche-rs: gauche_alloc/gauche_free not found in WASM exports — ' +
        'the .wasm file is older than this JS wrapper; rebuild it with `cargo web`',
      );
    }

    if (typeof _exports.initialize_index_wasm !== 'function') {
      throw new Error('gauche-rs: initialize_index_wasm not found in WASM exports');
    }
    const rc = _exports.initialize_index_wasm();
    if (rc !== 0) {
      throw new Error('gauche-rs: initialize_index_wasm failed with code ' + rc);
    }
  })();

  return _initPromise;
}

function _ensureInit() {
  if (!_exports) {
    throw new Error('gauche-rs: not initialised — call init() first');
  }
}

/**
 * Classify a single point.
 *
 * @param {number} lat — latitude (-90..90)
 * @param {number} lon — longitude (-540..540)
 * @returns {number} Classification.NO | YES | PARTIALLY, or -1 on error
 */
export function classifyPoint(lat, lon) {
  _ensureInit();
  return _exports.classify_point_wasm(lat, lon);
}

/**
 * Classify a bounding box.
 *
 * @param {number} minLat
 * @param {number} minLon
 * @param {number} maxLat
 * @param {number} maxLon
 * @returns {number} Classification.NO | YES | PARTIALLY, or -1 on error
 */
export function classifyBbox(minLat, minLon, maxLat, maxLon) {
  _ensureInit();
  return _exports.classify_bbox_wasm(minLat, minLon, maxLat, maxLon);
}

/**
 * Classify a polyline.
 *
 * @param {Array<[number, number]>} coords — array of [lat, lon] pairs
 * @returns {number} Classification.NO | YES | PARTIALLY, or -1 on error
 */
export function classifyLine(coords) {
  _ensureInit();
  if (!coords || coords.length === 0) return -1;

  const n = coords.length;
  const byteLength = n * 2 * Float64Array.BYTES_PER_ELEMENT; // 16 bytes per coord pair

  // Ask the Rust allocator for scratch space rather than writing to a fixed
  // address — the module exports no __heap_base, and a hardcoded offset runs
  // into the live heap on large inputs and traps the instance.
  const ptr = _exports.gauche_alloc(byteLength);
  if (!ptr) {
    throw new Error(`gauche-rs: failed to allocate ${byteLength} bytes for ${n} points`);
  }

  try {
    // Re-read .buffer after allocating: a growing allocation detaches the old one.
    const view = new Float64Array((_memory || _exports.memory).buffer, ptr, n * 2);
    for (let i = 0; i < n; i++) {
      view[i * 2] = coords[i][0];     // lat
      view[i * 2 + 1] = coords[i][1]; // lon
    }
    return _exports.classify_line_wasm(ptr, n);
  } finally {
    _exports.gauche_free(ptr, byteLength);
  }
}
