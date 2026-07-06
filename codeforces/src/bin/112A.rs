use std::{
    io::{self, BufRead},
    cmp::Ordering,
};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();

    let str1 = lines.next().unwrap().unwrap().to_lowercase();
    let str2 = lines.next().unwrap().unwrap().to_lowercase();

    match str1.cmp(&str2) {
        Ordering::Greater => println!("1"),
        Ordering::Less => println!("-1"),
        Ordering::Equal => println!("0"),
    }
}
