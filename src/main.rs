use std::process::ExitCode;

use gauche_rs::{Bbox, DrivingAreaIndex, Line, Point};

fn main() -> ExitCode {
    match run() {
        Ok(()) => ExitCode::SUCCESS,
        Err(msg) => {
            eprintln!("{msg}");
            ExitCode::from(1)
        }
    }
}

fn run() -> Result<(), String> {
    let mut args = std::env::args().skip(1).collect::<Vec<_>>();
    if args.is_empty() {
        return Err(usage());
    }

    let index = DrivingAreaIndex::from_default_osm().map_err(|e| e.to_string())?;

    let command = args.remove(0);
    let classification = match command.as_str() {
        "point" => {
            if args.len() != 2 {
                return Err(usage());
            }
            let lat = parse_f64(&args[0], "lat")?;
            let lon = parse_f64(&args[1], "lon")?;
            index
                .classify_point(Point::new(lat, lon))
                .map_err(|e| e.to_string())?
        }
        "line" => {
            if args.len() < 4 || args.len() % 2 != 0 {
                return Err(usage());
            }
            let mut points = Vec::new();
            for chunk in args.chunks(2) {
                points.push(Point::new(
                    parse_f64(&chunk[0], "lat")?,
                    parse_f64(&chunk[1], "lon")?,
                ));
            }
            index
                .classify_line(Line::new(points))
                .map_err(|e| e.to_string())?
        }
        "bbox" => {
            if args.len() != 4 {
                return Err(usage());
            }
            let bbox = Bbox::new(
                parse_f64(&args[0], "min_lat")?,
                parse_f64(&args[1], "min_lon")?,
                parse_f64(&args[2], "max_lat")?,
                parse_f64(&args[3], "max_lon")?,
            );
            index.classify_bbox(bbox).map_err(|e| e.to_string())?
        }
        _ => return Err(usage()),
    };

    println!(
        "{}",
        match classification {
            gauche_rs::Classification::Yes => "yes",
            gauche_rs::Classification::No => "no",
            gauche_rs::Classification::Partially => "partially",
        }
    );
    Ok(())
}

fn parse_f64(s: &str, name: &str) -> Result<f64, String> {
    s.parse::<f64>().map_err(|e| format!("invalid {name}: {e}"))
}

fn usage() -> String {
    "usage:\n  gauche-rs point <lat> <lon>\n  gauche-rs line <lat1> <lon1> <lat2> <lon2> [<lat3> <lon3> ...]\n  gauche-rs bbox <min_lat> <min_lon> <max_lat> <max_lon>".into()
}
