# AGENTS.md

## Purpose

This repository builds and ships `gauche-rs`: a left-hand-driving classifier with:

- Rust library + CLI
- Web artifact
- wasm FFI crate
- Generated C bindings (via w2c2)
- C++ wrapper

## Development workflow

1. Create a branch from `main`.
2. Make code changes.
3. Run formatting checks:
   - `cargo fmt --all -- --check`
   - `cargo fmt --manifest-path ffi/Cargo.toml --all -- --check`
4. Run core validation:
   - `cargo test`
   - `cargo bench --no-run`
5. Regenerate shipped artifacts when needed:
   - `cargo generate-c`
   - `cargo web`
6. Full release pipeline check:
   - `cargo release-all`
7. Use Conventional Commit style for commits, and ensure the PR title follows Conventional Commits (CI-enforced).

## Canonical commands

- `cargo web` → generates `dist/gauche-wasm-map.html`
- `cargo generate-c` → regenerates `c/gauche_ffi.c`, `c/gauche_ffi.h`, and runtime files under `c/w2c2/w2c2/`
- `cargo release-all` → release build + `generate-c` + `web`
- `cargo bench` → runs `ffi-vs-rust` and `queries`

Cargo aliases are defined in `.cargo/config.toml`:

- `cargo web`
- `cargo generate-c`
- `cargo release-all`

## CI and automation

- **PR title check** (`.github/workflows/pr-title-check.yml`)
  - Enforces Conventional Commits format for PR titles.
- **Release-all CI** (`.github/workflows/ci-release-all.yml`)
  - Rust setup (`wasm32-unknown-unknown`)
  - Rust formatting checks (root + `ffi`)
  - `cargo release-all`
  - C bindings compile check via CMake
- **Dependabot** (`.github/dependabot.yml`)
  - Weekly Cargo dependency updates for `/` and `/ffi`.

## Generated artifacts policy

If source changes impact generated outputs, regenerate and include them in the same PR:

- `c/gauche_ffi.c`
- `c/gauche_ffi.h`
- `c/s*.c` / `c/d*.c` (generated chunks)
- `c/w2c2/w2c2/*` (runtime headers/sources when refreshed)
- `dist/gauche-wasm-map.html`

## PR checklist

- [ ] Rust fmt checks pass
- [ ] Tests/build pass
- [ ] `cargo release-all` passes
- [ ] CMake build (`cpp/`) passes
- [ ] Regenerated artifacts are committed (if affected)
- [ ] PR title follows Conventional Commits
