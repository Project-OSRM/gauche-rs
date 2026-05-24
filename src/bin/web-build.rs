use std::error::Error;
use std::fs;
use std::io::Write;
use std::path::Path;
use std::process::{Command, Stdio};

fn main() -> Result<(), Box<dyn Error>> {
    let root = Path::new(env!("CARGO_MANIFEST_DIR"));

    let rustup_ok = Command::new("rustup")
        .args(["target", "add", "wasm32-unknown-unknown"])
        .current_dir(root)
        .status()
        .map(|s| s.success())
        .unwrap_or(false);
    if !rustup_ok {
        eprintln!("warning: rustup target add wasm32-unknown-unknown failed or rustup not found");
    }

    let build_status = Command::new("cargo")
        .args([
            "build",
            "--release",
            "--target",
            "wasm32-unknown-unknown",
            "--lib",
            "--features",
            "web-wasm",
        ])
        .current_dir(root)
        .status()?;
    if !build_status.success() {
        return Err("failed to compile wasm library".into());
    }

    let wasm_file = root.join("target/wasm32-unknown-unknown/release/gauche.wasm");
    if !wasm_file.exists() {
        return Err(format!("missing wasm output: {}", wasm_file.display()).into());
    }
    let wasm = fs::read(&wasm_file)?;
    let wasm_gzip = gzip_bytes(&wasm)?;
    let wasm_b64 = base64_encode(&wasm_gzip);

    let output_dir = root.join("dist");
    fs::create_dir_all(&output_dir)?;
    let output_file = output_dir.join("gauche-wasm-map.html");

    let html = HTML_TEMPLATE.replace("__WASM_BASE64__", &wasm_b64);
    fs::write(&output_file, html)?;
    println!("Wrote {}", output_file.display());
    Ok(())
}

fn gzip_bytes(input: &[u8]) -> Result<Vec<u8>, Box<dyn Error>> {
    let mut child = Command::new("gzip")
        .args(["-9", "-n", "-c"])
        .stdin(Stdio::piped())
        .stdout(Stdio::piped())
        .spawn()?;
    {
        let stdin = child.stdin.as_mut().ok_or("failed to open gzip stdin")?;
        stdin.write_all(input)?;
    }
    let output = child.wait_with_output()?;
    if !output.status.success() {
        return Err("gzip compression failed".into());
    }
    Ok(output.stdout)
}

fn base64_encode(input: &[u8]) -> String {
    const ALPHABET: &[u8; 64] = b"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    let mut out = String::with_capacity(input.len().div_ceil(3) * 4);

    let mut i = 0;
    while i + 3 <= input.len() {
        let n = ((input[i] as u32) << 16) | ((input[i + 1] as u32) << 8) | (input[i + 2] as u32);
        out.push(ALPHABET[((n >> 18) & 63) as usize] as char);
        out.push(ALPHABET[((n >> 12) & 63) as usize] as char);
        out.push(ALPHABET[((n >> 6) & 63) as usize] as char);
        out.push(ALPHABET[(n & 63) as usize] as char);
        i += 3;
    }

    let rem = input.len() - i;
    if rem == 1 {
        let n = (input[i] as u32) << 16;
        out.push(ALPHABET[((n >> 18) & 63) as usize] as char);
        out.push(ALPHABET[((n >> 12) & 63) as usize] as char);
        out.push('=');
        out.push('=');
    } else if rem == 2 {
        let n = ((input[i] as u32) << 16) | ((input[i + 1] as u32) << 8);
        out.push(ALPHABET[((n >> 18) & 63) as usize] as char);
        out.push(ALPHABET[((n >> 12) & 63) as usize] as char);
        out.push(ALPHABET[((n >> 6) & 63) as usize] as char);
        out.push('=');
    }

    out
}

const HTML_TEMPLATE: &str = r##"<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8" />
  <meta name="viewport" content="initial-scale=1,maximum-scale=1,user-scalable=no" />
  <title>Gauche LHT Classifier</title>
  <script src="https://unpkg.com/maplibre-gl@latest/dist/maplibre-gl.js"></script>
  <link href="https://unpkg.com/maplibre-gl@latest/dist/maplibre-gl.css" rel="stylesheet" />
  <style>
    body { margin: 0; padding: 0; font-family: sans-serif; }
    #map { position: absolute; top: 0; bottom: 0; width: 100%; }
    #panel {
      position: absolute;
      top: 12px;
      left: 12px;
      z-index: 2;
      background: rgba(255,255,255,0.95);
      border-radius: 6px;
      padding: 10px 12px;
      font-size: 13px;
      line-height: 1.35;
      max-width: 380px;
    }
    .dot-blue { color: #1e63ff; font-weight: 600; }
    .dot-orange { color: #ff8a00; font-weight: 600; }
  </style>
</head>
<body>
  <div id="map"></div>
  <div id="panel">
    Click anywhere on the map.<br />
    <span class="dot-blue">Blue</span> = left-hand traffic,
    <span class="dot-orange">orange</span> = right-hand traffic.<br />
    <div id="status">Loading WebAssembly…</div>
  </div>
  <script>
    const WASM_GZIP_B64 = "__WASM_BASE64__";

    function decodeBase64ToBytes(base64) {
      const binary = atob(base64);
      const bytes = new Uint8Array(binary.length);
      for (let i = 0; i < binary.length; i++) {
        bytes[i] = binary.charCodeAt(i);
      }
      return bytes;
    }

    async function gunzipBytes(gzipBytes) {
      if (!("DecompressionStream" in window)) {
        throw new Error("Browser does not support DecompressionStream");
      }
      const ds = new DecompressionStream("gzip");
      const stream = new Blob([gzipBytes]).stream().pipeThrough(ds);
      const buffer = await new Response(stream).arrayBuffer();
      return new Uint8Array(buffer);
    }

    async function initWasm() {
      const gzBytes = decodeBase64ToBytes(WASM_GZIP_B64);
      const bytes = await gunzipBytes(gzBytes);
      const { instance } = await WebAssembly.instantiate(bytes.buffer, {});
      if (typeof instance.exports.initialize_index_wasm === "function") {
        const rc = instance.exports.initialize_index_wasm();
        if (rc !== 0) {
          throw new Error("Failed to initialize index in WASM");
        }
      }
      if (typeof instance.exports.classify_point_wasm !== "function") {
        throw new Error("Missing classify_point_wasm export");
      }
      return instance.exports.classify_point_wasm;
    }

    const map = new maplibregl.Map({
      container: "map",
      style: "https://demotiles.maplibre.org/style.json",
      center: [8.682127, 50.110924],
      zoom: 3
    });

    const points = { type: "FeatureCollection", features: [] };
    const statusEl = document.getElementById("status");
    let classifyPoint = null;

    map.on("load", () => {
      map.addSource("click-points", { type: "geojson", data: points });
      map.addLayer({
        id: "click-points-layer",
        type: "circle",
        source: "click-points",
        paint: {
          "circle-radius": 6,
          "circle-color": ["get", "color"],
          "circle-stroke-color": "#ffffff",
          "circle-stroke-width": 1.5
        }
      });
    });

    initWasm().then((fn) => {
      classifyPoint = fn;
      statusEl.textContent = "Ready. Click to classify traffic side.";
    }).catch((error) => {
      statusEl.textContent = "WASM init failed: " + error.message;
      console.error(error);
    });

    map.on("click", (e) => {
      if (!classifyPoint) return;

      const lat = e.lngLat.lat;
      const lon = e.lngLat.lng;
      const code = classifyPoint(lat, lon);

      let color = "#ff8a00";
      let label = "right-hand traffic";
      if (code === 1) {
        color = "#1e63ff";
        label = "left-hand traffic";
      } else if (code === 2) {
        color = "#8a8a8a";
        label = "partially (unexpected for points)";
      } else if (code < 0) {
        color = "#c0392b";
        label = "error";
      }

      points.features.push({
        type: "Feature",
        geometry: { type: "Point", coordinates: [lon, lat] },
        properties: { color }
      });
      map.getSource("click-points").setData(points);
      statusEl.textContent = lat.toFixed(6) + ", " + lon.toFixed(6) + " -> " + label;
    });
  </script>
</body>
</html>
"##;
