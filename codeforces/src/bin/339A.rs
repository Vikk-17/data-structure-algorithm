use std::io::{self, BufRead};

fn rearrange(input: &str) -> String {
    let mut nums: Vec<i32> = input
        .split("+")
        .map(|v| v.parse::<i32>().unwrap())
        .collect::<Vec<i32>>();
    nums.sort();
    nums
        .iter()
        .map(|v| v.to_string())
        .collect::<Vec<_>>()
        .join("+")
}

fn main() {
    let mut lines = io::stdin().lock().lines();
    let input = lines.next().unwrap().unwrap();

    println!("{}", rearrange(&input));
}


#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_rearrange_decrease() {
        assert_eq!(rearrange("3+2+1"), "1+2+3");
    }

    #[test]
    fn test_rearrange_increase() {
        assert_eq!(rearrange("1+1+3+1+3"), "1+1+1+3+3");
    }

    #[test]
    fn test_rearrange_single() {
        assert_eq!(rearrange("2"), "2");
    }

}
