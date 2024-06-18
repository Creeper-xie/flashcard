use colored::*;
use rand::Rng;
use serde::Deserialize;
use std::env;
use std::io::{self, Write};
use std::time::Instant;

#[derive(Deserialize)]
struct Config {
    table: Vec<HiraganaRomajiPair>,
}

#[derive(Deserialize)]
struct HiraganaRomajiPair {
    hiragana: String,
    romaji: String,
}

fn main() -> Result<(), std::io::Error> {
    let args: Vec<String> = env::args().collect();
    let content = std::fs::read_to_string(&args[1])?;
    let config: Config = toml::from_str(&content).unwrap();
    loop {
        let secret_index = rand::thread_rng().gen_range(0..=config.table.len() - 1);
        let HiraganaRomajiPair { hiragana, romaji } = &config.table[secret_index];

        print!("{} ", hiragana);
        io::stdout().flush()?;

        let start = Instant::now();

        let mut input = String::new();
        io::stdin().read_line(&mut input)?;

        println!(
            "{}",
            if input.trim() == romaji {
                format!("ok: {}ms", start.elapsed().as_millis()).green()
            } else {
                format!("err: {}", romaji).red()
            }
        )
    }
}
