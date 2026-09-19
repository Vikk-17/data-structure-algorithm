fn take_input() -> String {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).expect("Could not read the input");
    input.to_owned()
}

fn main() {
    let mut histogram = HashMap::new();
    let number_of_round: usize = take_input().trim().parse::<usize>().expect("Could not parse the number");
    let winner_string = take_input().trim().to_owned();

    if winner_string.chars().count() != number_of_round {
        panic!("Expected {} characters", number_of_round);
    }

    let mut a_count = 0;
    let mut d_count = 0;

    for c in winner_string.chars() {
        match c.to_ascii_uppercase() {
            'A' => a_count += 1,
            'D' => d_count += 1,
            _ => {}
        }
    }

    if a_count > d_count {
        println!("Anton");
    } else if a_count < d_count {
        println!("Danik");
    } else {
        println!("Friendship");
    }
}
