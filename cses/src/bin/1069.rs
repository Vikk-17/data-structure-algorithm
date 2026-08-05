use std::{
    cmp::max,
    io::{self, BufRead},
};

fn take_input() -> String {
    let mut lines = io::stdin().lines();
    let binding = lines.next().unwrap().unwrap();
    let input = binding.trim();
    input.to_owned()
}

fn best_run(input: &str) -> i32 {
    let mut current = 1;
    let mut best = 1;

    let bytes = input.as_bytes();
    let len = bytes.len();

    for i in 1..=len-1 {
        if bytes[i] == bytes[i-1] {
            current += 1;
        } else {
            current = 1;
        }

        best = max(best, current)
    }

    best
}

fn idiomatic_best_run(input: &str) -> i32 {
    let mut current = 1;
    let mut best = 1;
    let mut chars = input.chars();
    let Some(mut prev) = chars.next() else {
        return 0;
    };

    for ch in chars {
        if ch == prev {
            current += 1;
        } else {
            current = 1;
        }
        best = max(best, current);
        prev = ch;
    }

    best
}

fn main() {
    let input = take_input();

    let best = idiomatic_best_run(&input);
    println!("{:?}", best);
}
