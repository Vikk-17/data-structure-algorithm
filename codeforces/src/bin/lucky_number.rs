use std::io;

fn lucky_number(value: u64) -> &'static str {
    let mut count = 0;
    let mut n = value;
    while n > 0 {
        let digit = n % 10;
        if digit == 4 || digit == 7 {
            count += 1;
        }
        n /= 10;
    }

    if count == 4 || count == 7 {
        "YES"
    } else {
        "NO"
    }
}

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let number = input.trim().parse().unwrap();

    println!("{}", lucky_number(number));
}
