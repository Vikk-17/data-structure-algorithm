use std::io;

fn main() {
    let mut lines = io::stdin().lines();
    let n = lines.next().unwrap().unwrap().parse().unwrap();
    let mut arr: Vec<i64> = lines.next().unwrap().unwrap().trim().split_whitespace()
        .map(|v| v.parse().unwrap())
        .collect();

    let mut cost = 0;
    for i in 1..n {
        if arr[i-1] > arr[i] {
            let diff = arr[i-1] - arr[i];
            cost += diff;
            arr[i] = arr[i-1];
        }
    }
    println!("{cost}");
}
