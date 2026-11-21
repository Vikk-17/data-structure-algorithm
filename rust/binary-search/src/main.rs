mod search;
use search::{Search, Solution};

mod bound_search;
use bound_search::BoundSearch;

fn main() {
    let arr: Vec<i32> = vec![-1, 0, 3, 5, 9, 12];
    let target = 10;
    let idx = BoundSearch::lower_bound_search(arr, target);
    println!("{idx}");

    let nums: Vec<i32> = vec![2, 3, 7, 10, 11, 11, 25];
    let x = 11;
    let idx1 = BoundSearch::upper_bound_search(nums, x);
    println!("{idx1}");
}
