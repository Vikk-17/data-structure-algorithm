use sorting::{take_input, Sorting};
// use sorting::Sorting;

fn main() {
    let mut array: Vec<i32> = take_input();
    // sort
    Sorting::selection_sort(&mut array);
    println!("{:?}", array);
}
