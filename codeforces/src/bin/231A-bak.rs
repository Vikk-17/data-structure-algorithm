use std::io;

#[derive(Debug)]
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


fn main() {
    let mut input_vec: Vec<Friends> = Vec::new();

    let size = match take_number() {
        Ok(n) =>  n,
        Err(e) => {
            println!("Invalid input: {}", e);
            return;
       }
    };

    for _ in 0..size {
        let petya = take_number().unwrap() != 0;
        let vasya = take_number().unwrap() != 0;
        let tonya = take_number().unwrap() != 0;

        input_vec.push(Friends::new(petya, vasya, tonya));
    }

    //
    // // println!("{:#?}", input_vec);
    // for name in input_vec.iter() {
    //     println!("{:?}", name);
    // }


}
