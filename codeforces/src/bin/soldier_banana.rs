use std::io;

fn soldier_banana(k: u64, n: u64, w: u64) -> u64 {
    let total_cost = k * w * (w + 1) / 2;
    total_cost.saturating_sub(n)
}

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let mut arr = input
        .split_whitespace()
        .map(|value| value.parse::<u64>().unwrap());

    let k = arr.next().unwrap();
    let n = arr.next().unwrap();
    let w = arr.next().unwrap();

    println!("{}", soldier_banana(k, n, w));
}
