use std::io;
use std::error::Error;

fn take_size() -> Result<i32, std::num::ParseIntError >{
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read stdin");

    let number = input.trim().parse::<i32>()?;

    return Ok(number);
}

fn take_input() -> Result<String, Box<dyn Error>> {
    let mut s = String::new();
    io::stdin()
        .read_line(&mut s)
        .expect("Cannot read from the stdin");
    let string = s.trim().to_string();

    Ok(string)
}

fn main() {

    // take the input
    let mut size = match take_size() {
        Ok(val) => val,
        Err(_) => {
            println!("Invalid integer");
            return;
        }
    };

    // set the variable
    let mut x = 0;

    // run the loop
    while size > 0 {
        let string = take_input().ok().unwrap();
        let first_byte = string.as_bytes()[1];
        let c = first_byte as char;

        if c == '+' {
            x += 1;
        } else {
            x -= 1;
        }
        size -= 1;
    }
    println!("{}", x);
}
