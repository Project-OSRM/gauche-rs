# Vendored w2c2 runtime

`w2c2/w2c2_base.h` is copied verbatim from [turbolent/w2c2](https://github.com/turbolent/w2c2)
and is the only w2c2 file the generated sources in `../` depend on. It is a
header-only runtime: `gauche_ffi.c` and `s0000000000.c` include it and need
nothing else from the w2c2 project.

The rest of the w2c2 repository is the wasm-to-C translator itself. It is used
by `cargo generate-c` at code-generation time only and is deliberately not
vendored here, so it is neither compiled into nor distributed with the library.

Refresh with `cargo generate-c`. Licensed under the MIT License; see `LICENSE`.
