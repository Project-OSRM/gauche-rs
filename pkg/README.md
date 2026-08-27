# gauche-rs

Left-hand traffic area classifier for point, line, and bbox queries, compiled to WebAssembly.

Answers "does this location drive on the left?" entirely offline — the OSM driving-side
polygons and a 0.1° lookup bitmap are baked into the `.wasm`, so there are no network
calls and no runtime data files.

## Install

```bash
npm install gauche-rs
```

## Usage

```js
import { init, classifyPoint, classifyLine, classifyBbox, Classification } from 'gauche-rs';

await init();

classifyPoint(51.5074, -0.1278);            // 1 — London, left-hand traffic
classifyPoint(52.5200, 13.4050);            // 0 — Berlin, right-hand traffic
classifyLine([[51.5, -0.1], [51.6, -0.05]]) // 1
classifyBbox(49.0, -5.0, 55.0, 2.0);        // 2 — spans both, "partially"
```

### Results

| Value | `Classification` | Meaning |
| --- | --- | --- |
| `0` | `NO` | Right-hand traffic |
| `1` | `YES` | Left-hand traffic |
| `2` | `PARTIALLY` | Geometry spans both (line and bbox only) |
| `-1` | — | Invalid input |

`classifyPoint` never returns `2`.

## API

**`init(wasmUrl?)`** — loads and instantiates the WASM module. Must be awaited before any
classify call. Safe to call repeatedly; subsequent calls return the cached promise. By
default the `.wasm` is resolved relative to this module via `new URL('./gauche_rs.wasm',
import.meta.url)`, which works out of the box in Vite, Webpack, Rollup, and native ES
modules. Pass an explicit URL if you serve the asset from elsewhere, such as a CDN.

**`classifyPoint(lat, lon)`** — latitude `-90..90`, longitude `-540..540`.

**`classifyBbox(minLat, minLon, maxLat, maxLon)`**

**`classifyLine(coords)`** — `coords` is an array of `[lat, lon]` pairs. Coordinates are
copied into WASM memory through the module's allocator and released afterwards, so there
is no practical limit on the number of points.

## Notes

`init()` uses `fetch`, so this package targets browsers and other `fetch`-capable
environments. Serve `gauche_rs.wasm` with `Content-Type: application/wasm` to get the
streaming instantiation path.

The equivalent native Rust library is published on crates.io as
[`gauche-rs`](https://crates.io/crates/gauche-rs).

## License

BSD-2-Clause. See [LICENSE](./LICENSE).
