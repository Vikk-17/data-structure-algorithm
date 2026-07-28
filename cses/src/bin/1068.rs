use std::io::{self, BufRead};

fn weired_algo(n: usize) {
    print!("{n} ");

    if n == 1 {
        return;
    }
    if n % 2 == 0 {
        weired_algo(n / 2);
    } else {
        weired_algo(3 * n + 1);
    }
}

fn main() {
    let mut lines = io::stdin().lock().lines();
    let n: usize = lines
        .next()
        .unwrap()
        .unwrap()
        .parse()
        .unwrap();

    weired_algo(n);

    println!();
}
