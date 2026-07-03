use std::io;

fn take_input() -> String {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .unwrap();
    input.trim().to_owned()
}

fn main() {
    let input = take_input();

    let mut nums = input
        .split_whitespace()
        .map(|n| n.parse::<usize>().unwrap());

    let n = nums.next().unwrap();
    let k = nums.next().unwrap();

    // 1<= k <= n <= 50
    if k < 1 || k > n || n > 50 {
        println!("Invalid input: {} > {}", k, n);
        return;
    }

    let input = take_input();
    let arr: Vec<usize> = input
        .split_whitespace()
        .map(|x| x.parse::<usize>().unwrap())
        .collect();

    let threshold = arr[k-1];
    let count = arr
        .iter() // yeilds &
        .filter(|&&score| score >= threshold && score > 0) // same & [or **score]
        .count();

    println!("{}", count);
}
