use std::io::{self, BufRead};

// Manhattan distance, logic: abs(i-3) + abs(j-3)
fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let mut moves = 0;

    for r in 1..=5 {
        if let Some(Ok(line)) = lines.next() {
            let row: Vec<i32> = line
                .split_whitespace()
                .map(|v| v.parse().unwrap())
                .collect();

            if let Some(c) = row.iter().position(|&p| p == 1) {
                moves = ((r as i32) - 3).abs() + (((c+1) as i32) - 3).abs();
            }
        }
    }

    println!("{moves}");
}
