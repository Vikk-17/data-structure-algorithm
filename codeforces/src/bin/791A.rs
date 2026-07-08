use std::io::{self, BufRead};

fn main() {
    let mut lines = io::stdin().lock().lines();
    let input: Vec<i32> = lines.next().unwrap().unwrap()
        .trim()
        .split_whitespace()
        .map(|v| v.parse::<i32>().unwrap())
        .collect();

    let mut a = input[0];
    let mut b = input[1];
    let mut years = 0;

    while b >= a {
        years += 1;
        a *= 3;
        b *= 2;
    }

    println!("{}", years);

}
