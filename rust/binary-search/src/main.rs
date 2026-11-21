mod search;
use search::{Search, Solution};

fn main() {
    let arr: Vec<i32> = vec![-1, 0, 3, 5, 9, 12];
    let target = 9;
    let idx = Solution::binary_search(arr, target);
    println!("{idx}");
}
