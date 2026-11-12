//! 1742A: You are given three integers a, b, and c. Determine if one of them is the sum of the other two.
//!
//! Input:
//! The first line contains a single integer t (1≤t≤9261) — the number of test cases.
//! The description of each test case consists of three integers a, b, c (0≤a,b,c≤20).
//!
//! Output:
//! For each test case, output "YES" if one of the numbers is the sum of the other two, and "NO" otherwise.
//! You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
//
// let rows = 3;
// let cols = 4;
//
// let matrix: Vec<Vec<usize>> = (0..rows)
//     .map(|r| (0..cols).map(|c| r * c).collect())
//     .collect();

use std::io;

// [size x 3]
type Matrix = Vec<Vec<usize>>;

fn check_sum(arr: &[usize]) -> bool {
    // early return for more than 3 numbers
    if arr.len() != 3 {
        return false;
    }

    for i in 0..3 {
        let a = arr[(i+1)%3];
        let b = arr[(i+2)%3];

        if a + b == arr[i] {
            return true;
        }
    }
    false
}

fn take_smallest_unit() -> Vec<usize> {
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let small_unit: Vec<usize> = input
        .split_whitespace()
        .map(|value| value.parse::<usize>().unwrap())
        .collect();
    small_unit
}

fn test_input() -> Matrix {
    // Take the test size
    let mut input: String = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let size = input.trim().parse::<i32>().unwrap();

    let mut matrix = Vec::new();

    for _ in 0..size {
        matrix.push(take_smallest_unit())
    }
    matrix
}

fn main() {
    let matrix: Matrix = test_input();
 
    for row in matrix.iter() {
        if check_sum(row) {
            println!("YES");
        } else {
            println!("NO");
        }
    }
}
