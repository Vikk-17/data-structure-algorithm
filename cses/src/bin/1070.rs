use std::io;

fn main() {
    let mut lines = io::stdin().lines();
    let input: usize = lines
        .next()
        .unwrap()
        .unwrap()
        .parse::<usize>()
        .unwrap();

    if input == 2 || input == 3 {
        println!("NO SOLUTION");
        return;
    } 

    for i in (2..=input).step_by(2) {
        print!("{i} ");
    }

    for i in (1..=input).step_by(2) {
        print!("{i} ");
    }
    println!();
}
