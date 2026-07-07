use std::collections::HashSet;
use std::io::{self, BufRead};

fn diff(input: &str) -> &'static str {
    let unique_chars: HashSet<char> = input.chars().collect();
    if unique_chars.len() % 2 == 0 {
        "CHAT WITH HER!"
    } else {
        "IGNORE HIM!"
    }
}

fn main() {
    let mut lines = io::stdin().lock().lines();
    let input = lines.next().unwrap().unwrap();
    println!("{}", diff(&input));
}


#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_chat_diff() {
        assert_eq!(diff("wjmzbmr"), "CHAT WITH HER!");
    }

    #[test]
    fn test_ignore_diff() {
        assert_eq!(diff("xiaodao"), "IGNORE HIM!");
    }
}
