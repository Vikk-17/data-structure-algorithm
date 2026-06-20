/* Way Too Long Words */

use std::io;

fn get_user_input() -> Result<i32, std::num::ParseIntError> {
    let mut user_input: String = String::new();
    io::stdin()
        .read_line(&mut user_input)
        .expect("Failed to read from stdin");

    let n = user_input.trim().parse::<i32>()?;
    Ok(n)
}

fn convert_to_short(word: &str) -> String {
    let size = word.len();
    if size <= 10 {
        return word.to_string();
    }
    let first = word.chars().next().unwrap();
    let last = word.chars().last().unwrap();
    format!("{}{}{}", first, size - 2, last)
}

fn main() {
    let mut inputs_vec = Vec::new();

    // parse the input
    let n = match get_user_input() {
        Ok(n) => n,
        Err(e) => {
            println!("Invalid input: {}", e);
            return;
        }
    };

    for _ in 0..n {
        let mut input = String::new();
        std::io::stdin()
            .read_line(&mut input)
            .expect("Failed to read input");
        inputs_vec.push(input.trim().to_string());
    }

    for word in &inputs_vec {
        println!("{}", convert_to_short(&word));
    }
}
