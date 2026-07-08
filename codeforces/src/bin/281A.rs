use std::io::{self, BufRead};
// fn capitalize_first(input: &str) -> String {
//     let mut chars = input.chars();
//     match chars.next() {
//         None => String::new(),
//         Some(first) => first.to_uppercase().chain(chars).collect(),
//     }
// }
fn uppercase_first_letter(s: &str) -> String {
    let mut c = s.chars();
    match c.next() {
        None => String::new(),
        Some(f) => f.to_uppercase().collect::<String>() + c.as_str(),
    }
}

fn main() {
    let mut lines = io::stdin().lock().lines();
    let input = lines.next().unwrap().unwrap();

    println!("{}", uppercase_first_letter(&input));
}
