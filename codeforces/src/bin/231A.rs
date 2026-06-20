use std::io;

struct Friends {
    petya: bool,
    vasya: bool,
    tonya: bool,
}

trait Constructor {
    fn new(petya: bool, vasya: bool, tonya: bool) -> Self;
}

impl Constructor for Friends {
    fn new(petya: bool, vasya: bool, tonya: bool) -> Self {
        Self {
            petya,
            vasya,
            tonya,
        }
    }
}

fn take_number() -> Result<i32, std::num::ParseIntError> {
    let mut user_input = String::new();

    io::stdin()
        .read_line(&mut user_input)
        .expect("Could not read from stdin");

    let number = user_input.trim().parse::<i32>()?;

    Ok(number)
}

fn element() -> Friends {
   let friends: Friends = Friends::new(true, true, false);

   friends
}

fn main() {
    
}
