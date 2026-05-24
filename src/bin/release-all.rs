use std::error::Error;
use std::path::Path;
use std::process::Command;

fn main() -> Result<(), Box<dyn Error>> {
    let root = Path::new(env!("CARGO_MANIFEST_DIR"));

    run(root, &["build", "--release", "--lib", "--bins"])?;
    run(root, &["generate-c"])?;
    run(root, &["web"])?;

    Ok(())
}

fn run(root: &Path, args: &[&str]) -> Result<(), Box<dyn Error>> {
    let status = Command::new("cargo")
        .args(args)
        .current_dir(root)
        .status()?;
    if status.success() {
        Ok(())
    } else {
        Err(format!("cargo {:?} failed", args).into())
    }
}
