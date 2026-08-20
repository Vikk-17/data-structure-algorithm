use std::io;

fn wrong_substraction(input: &[i64]) -> i64 {
    let mut n = input[0];
    let k = input[1];

    for _ in 1..=k {
        if n%10 != 0 {
            n -= 1;
        } else {
            n /= 10;
        }
    }
    n
}

fn main() {
    let mut lines = io::stdin().lines();
    let input: Vec<i64> = lines
        .next()
        .unwrap()
        .unwrap()
        .trim()
        .split_whitespace()
        .map(|v| v.parse::<i64>().unwrap())
        .collect();

    println!("{}", wrong_substraction(&input));
}
