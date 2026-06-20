use std::io;

type Rows = Vec<Vec<i32>>;

fn take_size() -> Result<i32, std::num::ParseIntError> {
    let mut user_input = String::new();

    io::stdin()
        .read_line(&mut user_input)
        .expect("Could not read from stdin");

    let number = user_input.trim().parse::<i32>()?;

    Ok(number)
}

fn take_three_number() -> Vec<i32> {
    let mut input = String::new();

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read the line");


    input
        .split_whitespace()
        .map(|s| s.parse::<i32>().unwrap())
        .collect()
}

fn problems_to_solve(rows: &Rows) {
    let mut count = 0;
    for row in rows {
        let sum: i32 = row.iter().sum();

        if sum >= 2 {
            count += 1;
        }
    }

    println!("{}", count);
}


fn main() {
    let mut input_vec: Rows = Vec::new();
    let size = match take_size() {
        Ok(n) => n,
        Err(_) => {
            println!("Invalid integer");
            return;
        }
    };
    
    for _ in 0..size {
        let numbers = take_three_number();
        input_vec.push(numbers);
    }

    // println!("{:?}", input_vec);
    problems_to_solve(&input_vec);

}
