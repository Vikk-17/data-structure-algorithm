use std::io;

fn take_input() -> String {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    input.trim().to_owned()
}

fn main() {
    let n: usize = take_input().parse().unwrap();

    // set the variable
    let mut x = 0;

    // run the loop
    for _ in 0..n {
        let op = take_input();

        if op.as_bytes()[1] == b'+' {
            x += 1;
        } else {
            x -= 1;
        }
    }
    println!("{}", x);
}
