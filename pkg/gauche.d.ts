/**
 * gauche-rs — Left-hand traffic area classifier (WASM).
 *
 * @example
 * ```ts
 * import { init, classifyPoint, Classification } from 'gauche-rs';
 * await init();
 * const result: number = classifyPoint(51.5074, -0.1278);
 * ```
 */

/** Classification result constants. */
export const Classification: {
  readonly NO: 0;
  readonly YES: 1;
  readonly PARTIALLY: 2;
};

/**
 * Initialise the WASM module. Safe to call multiple times — subsequent calls
 * return the cached promise.
 *
 * @param wasmUrl — URL/path to gauche_rs.wasm (defaults to co-located file).
 */
export function init(wasmUrl?: string | URL): Promise<void>;

/**
 * Classify a single point.
 * @returns 0=right-hand, 1=left-hand, 2=partially, -1=error
 */
export function classifyPoint(lat: number, lon: number): number;

/**
 * Classify a bounding box.
 * @returns 0=right-hand, 1=left-hand, 2=partially, -1=error
 */
export function classifyBbox(
  minLat: number,
  minLon: number,
  maxLat: number,
  maxLon: number,
): number;

/**
 * Classify a polyline.
 * @param coords — array of [lat, lon] pairs (at least 1).
 * @returns 0=right-hand, 1=left-hand, 2=partially, -1=error
 */
export function classifyLine(coords: Array<[number, number]>): number;
