use std::io;

fn word(input: &str) -> String {
    let uppercase = input
        .chars()
        .filter(|c| c.is_uppercase())
        .count();

    let lowercase = input
        .chars()
        .filter(|c| c.is_lowercase())
        .count();

    if uppercase > lowercase {
        input.to_uppercase().to_owned()
    } else {
        input.to_lowercase().to_owned()
    }
}

fn main() {
    let mut lines = io::stdin().lines();
    let input = lines.next().unwrap().unwrap();

    println!("{}", word(&input));
}
