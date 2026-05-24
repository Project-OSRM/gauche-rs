use std::error::Error;
use std::fs;
use std::path::{Path, PathBuf};
use std::process::Command;
use std::time::{SystemTime, UNIX_EPOCH};

fn main() -> Result<(), Box<dyn Error>> {
    let root = Path::new(env!("CARGO_MANIFEST_DIR"));
    let ffi_root = root.join("ffi");
    build_wasm_ffi(&ffi_root)?;

    let helper_root = create_helper_project(root)?;
    let status = Command::new("cargo")
        .args(["run", "--quiet", "--manifest-path", "Cargo.toml", "--"])
        .current_dir(&helper_root)
        .env("GAUCHE_ROOT", root)
        .status()?;
    if !status.success() {
        return Err("w2c2 helper generation failed".into());
    }

    copy_generated_artifacts(&helper_root, root)?;

    println!("Wrote {}/c/gauche_ffi.c", root.display());
    Ok(())
}

fn build_wasm_ffi(ffi_root: &Path) -> Result<(), Box<dyn Error>> {
    let status = Command::new("cargo")
        .args([
            "build",
            "--manifest-path",
            "Cargo.toml",
            "--release",
            "--target",
            "wasm32-unknown-unknown",
        ])
        .current_dir(ffi_root)
        .status()?;
    if !status.success() {
        return Err("failed to build wasm ffi crate".into());
    }
    Ok(())
}

fn create_helper_project(root: &Path) -> Result<PathBuf, Box<dyn Error>> {
    let stamp = SystemTime::now().duration_since(UNIX_EPOCH)?.as_millis();
    let helper_root =
        std::env::temp_dir().join(format!("gauche-w2c2-{stamp}-{}", std::process::id()));
    if helper_root.exists() {
        fs::remove_dir_all(&helper_root)?;
    }
    fs::create_dir_all(helper_root.join("src"))?;

    let repo_root = helper_root.join("w2c2-rs");
    let status = Command::new("git")
        .args(["clone", "https://github.com/stevefan1999-personal/w2c2-rs"])
        .arg(&repo_root)
        .status()?;
    if !status.success() {
        return Err("failed to clone w2c2-rs".into());
    }

    let status = Command::new("git")
        .args(["submodule", "update", "--init", "--recursive"])
        .current_dir(&repo_root)
        .status()?;
    if !status.success() {
        return Err("failed to initialize w2c2 submodules".into());
    }

    patch_w2c2_out_c(&repo_root.join("w2c2-sys/src/out.c"))?;
    if std::env::consts::OS == "linux" {
        patch_w2c2_str_h(&repo_root.join("w2c2-sys/w2c2/w2c2/str.h"))?;
    }

    let cargo_toml = format!(
        r#"[package]
name = "gauche-w2c2-helper"
version = "0.1.0"
edition = "2024"

[dependencies]
const-default = {{ version = "1.0.0", features = ["derive"] }}
w2c2-sys = {{ path = "{w2c2_sys_path}" }}
"#,
        w2c2_sys_path = repo_root.join("w2c2-sys").display()
    );
    fs::write(helper_root.join("Cargo.toml"), cargo_toml)?;
    fs::write(helper_root.join("src/main.rs"), helper_main(root))?;
    Ok(helper_root)
}

fn patch_w2c2_out_c(path: &Path) -> Result<(), Box<dyn Error>> {
    let mut content = fs::read_to_string(path)?;
    content = content.replace(r#"w2c2\w2c2\"#, r#"w2c2/w2c2/"#);
    fs::write(path, content)?;
    Ok(())
}

fn patch_w2c2_str_h(path: &Path) -> Result<(), Box<dyn Error>> {
    let mut content = fs::read_to_string(path)?;
    content = content.replace("#if !HAS_STRDUP", "#if 0 /* gauche: use libc strdup */");
    fs::write(path, content)?;
    Ok(())
}

fn copy_generated_artifacts(helper_root: &Path, root: &Path) -> Result<(), Box<dyn Error>> {
    let output_dir = root.join("c");
    fs::create_dir_all(&output_dir)?;
    for file in ["gauche_ffi.c", "gauche_ffi.h"] {
        fs::copy(helper_root.join(file), output_dir.join(file))?;
    }
    for entry in fs::read_dir(helper_root)? {
        let entry = entry?;
        let path = entry.path();
        let Some(name) = path.file_name().and_then(|name| name.to_str()) else {
            continue;
        };
        if path.is_file()
            && (name.starts_with('s') || name.starts_with('d'))
            && name.ends_with(".c")
        {
            fs::copy(&path, output_dir.join(name))?;
        }
    }
    let runtime_src = helper_root.join("w2c2-rs/w2c2-sys/w2c2/w2c2");
    let runtime_dst = output_dir.join("w2c2/w2c2");
    copy_tree(&runtime_src, &runtime_dst)?;
    Ok(())
}

fn copy_tree(src: &Path, dst: &Path) -> Result<(), Box<dyn Error>> {
    if !src.exists() {
        return Err(format!("missing w2c2 runtime tree: {}", src.display()).into());
    }
    fs::create_dir_all(dst)?;
    for entry in fs::read_dir(src)? {
        let entry = entry?;
        let path = entry.path();
        let dest = dst.join(entry.file_name());
        if path.is_dir() {
            copy_tree(&path, &dest)?;
            continue;
        }
        let Some(ext) = path.extension().and_then(|ext| ext.to_str()) else {
            continue;
        };
        if ext != "c" && ext != "h" {
            continue;
        }
        if path
            .file_name()
            .and_then(|name| name.to_str())
            .is_some_and(|name| name.contains("test") || name == "main.c")
        {
            continue;
        }
        fs::copy(&path, &dest)?;
    }
    Ok(())
}

fn helper_main(root: &Path) -> String {
    let template = r#"use std::error::Error;
use std::ffi::{CStr, CString};
use std::fs;
use std::ptr::null_mut;

    use const_default::ConstDefault;
    use w2c2_sys::{
        wasmCWriteModule, wasmFunctionIDsAppend, wasmFunctionIDsFree, wasmModuleRead,
        wasmModuleReaderErrorMessage, Buffer, WasmCWriteModuleOptions, WasmFunctionID,
        WasmFunctionIDs, WasmModuleReader, WasmModuleReaderError,
    };

fn main() -> Result<(), Box<dyn Error>> {
    let root = std::path::Path::new("__ROOT__");
    let wasm_file = root.join("ffi/target/wasm32-unknown-unknown/release/gauche_ffi.wasm");
    let wasm = fs::read(&wasm_file)?;
    let mut error: *mut WasmModuleReaderError = null_mut();

    let mut reader = WasmModuleReader::builder()
        .buffer(
            Buffer::builder()
                .data(wasm.as_ptr() as *mut _)
                .length(wasm.len())
                .build(),
        )
        .debug(false)
        .module(null_mut())
        .build();

    unsafe {
        wasmModuleRead(&mut reader as *mut _, &mut error);
        if !error.is_null() {
            let message = CStr::from_ptr(wasmModuleReaderErrorMessage(error))
                .to_string_lossy()
                .into_owned();
            return Err(format!("failed to read wasm module: {message}").into());
        }
    }

    let mut static_function_ids = WasmFunctionIDs::DEFAULT;
    unsafe {
        let function_count = (*reader.module).functions.count as usize;
        for function_index in 0..function_count {
            let function_id = WasmFunctionID {
                hash: [0; 20],
                functionIndex: function_index as u32,
            };
            if !wasmFunctionIDsAppend(&mut static_function_ids, function_id) {
                return Err("failed to append function id".into());
            }
        }
    }

    let output_dir = root.join("c");
    fs::create_dir_all(&output_dir)?;
    let output_path = output_dir.join("gauche_ffi.c");
    let mut output_path_buf = output_path.to_string_lossy().as_bytes().to_vec();
    output_path_buf.push(0);

    let module_name = CString::new("gauche_ffi")?;
    unsafe {
        wasmCWriteModule(
            reader.module,
            module_name.as_ptr(),
            WasmCWriteModuleOptions {
                outputPath: output_path_buf.as_ptr() as *const _,
                ..WasmCWriteModuleOptions::DEFAULT
            },
            static_function_ids,
            WasmFunctionIDs::DEFAULT,
        );
        wasmFunctionIDsFree(&mut static_function_ids);
    }

    Ok(())
}
"#;
    template.replace("__ROOT__", &root.display().to_string())
}
