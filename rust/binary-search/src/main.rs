mod search;
use search::{Search, Solution};

mod lower_bound;
use lower_bound::LowerBoundSearch;

fn main() {
    let arr: Vec<i32> = vec![-1, 0, 3, 5, 9, 12];
    let target = 10;
    let idx = LowerBoundSearch::lower_bound_search(arr, target);
    println!("{idx}");
}
