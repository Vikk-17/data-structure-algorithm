use std::io;

fn take_input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .unwrap();
    input.trim().to_string()
}

fn main() {
    let input = take_input();
    let mut nums = input
        .split_whitespace()
        .map(|v| v.parse::<usize>().unwrap());

    let m = nums.next().unwrap();
    let n = nums.next().unwrap();

    // 1 ≤ M ≤ N ≤ 16
    if m < 1 || m > n || n > 16 {
        return;
    }

    let dominos = m * n / 2;

    println!("{}", dominos);
}
