# gauche-rs

Left-hand-driving area classifier for `Point`, `Line`, and `Bbox` queries over `left-right-hand-traffic.osm`.

## Targets

| Target | Command | Purpose |
| --- | --- | --- |
| Library | `cargo test` / `cargo build` | Core Rust classifier API |
| CLI | `cargo run -- point <lat> <lon>` | Query a point, line, or bbox from the terminal |
| web | `cargo web` | Generates `dist/gauche-wasm-map.html` |
| bench | `cargo bench` | Runs the root `ffi-vs-rust` and `queries` Criterion benches |
| FFI wasm | `cargo build --manifest-path ffi/Cargo.toml --target wasm32-unknown-unknown --release` | Opaque-handle wasm API for C/C++ consumers |
| generate-c | `cargo generate-c` | Regenerate checked-in `c/gauche_ffi.c` and `c/gauche_ffi.h` from wasm via w2c2 |
| C++ wrapper | `cmake -S cpp -B cpp/build && cmake --build cpp/build` | Consumable C++ library and example over the checked-in C FFI |
| release-all | `cargo release-all` | Rebuild release targets, then regenerate `c/` and `dist/` artifacts |

## Query semantics

- `point` returns `yes` or `no`
- `line` and `bbox` return `yes`, `no`, or `partially`
- `partially` results fall back to exact geometry checks

## Examples

```bash
cargo run -- point 51.5072 -0.1276
cargo run -- line 51.5 -0.1 52.0 0.2
cargo run -- bbox 49.0 -5.0 55.0 2.0
```

## Generated artifacts

- `preprocessed/bitmap.bin` stores the 0.1° bitmap used at runtime.
- `dist/gauche-wasm-map.html` is the generated web artifact.
- `c/gauche_ffi.c`, `c/gauche_ffi.h`, and `c/w2c2/w2c2/` are checked in and regenerated from the wasm FFI target.

## Layout

- `src/lib.rs` — core classifier
- `src/main.rs` — CLI
- `src/bin/web-build.rs` — web target generator
- `src/bin/generate-c.rs` — wasm-to-C generator
- `ffi/` — wasm FFI crate
- `benches/ffi-vs-rust.rs` — Root ffi-vs-rust Criterion benchmark
- `benches/queries.rs` — Root query Criterion benchmark
- `cpp/` — CMake-based C++ wrapper and example
