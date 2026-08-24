fn translation(word: &str) -> String {
    word.chars().rev().collect::<String>()
}

fn is_translated(word1: &str, word2: &str) -> &'static str {
    if word1 == word2 {
        "YES"
    } else {
        "NO"
    }
}

fn main() {
    let mut input = String::new();
    std::io::stdin().read_line(&mut input).unwrap();

    let mut input2 = String::new();
    std::io::stdin().read_line(&mut input2).unwrap();

    let translated_input: String = translation(input.trim());
    println!("{}", is_translated(&translated_input, input2.trim()));
}
