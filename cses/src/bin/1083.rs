use std::io;

fn main() {
    let mut lines = io::stdin().lines();
    let input = lines.next().unwrap().unwrap().parse::<i32>().unwrap();
    let numbers: Vec<i32> = lines
        .next()
        .unwrap()
        .unwrap()
        .trim()
        .split_whitespace()
        .map(|v| v.parse::<i32>().unwrap())
        .collect();

    // solve the problem
    // xor of actual numbers from 1 -> input
    let mut ans = 0;
    for i in 1..=input {
        ans ^= i;
    }

    // xor of number series with the ans we got
    for i in numbers.iter() {
        ans ^= i;
    }
    println!("{}", ans);
}
