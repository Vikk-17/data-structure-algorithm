use std::io;

fn calculate(n: i64) -> i64 {
    if n % 2 == 0 {
        n /2
    } else {
        -(n+1) / 2
    }
}

fn main() {
    let mut lines = io::stdin().lines();
    let number = lines.next().unwrap().unwrap().parse::<i64>().unwrap();
    println!("{}", calculate(number));
}
