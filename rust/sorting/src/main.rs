use sorting::{Sorting, take_input};
// use sorting::Sorting;

fn main() {
    let mut array: Vec<i32> = take_input();

    // Bubble sort
    let sorted_arr = Sorting::bubble_sort(&mut array);
    println!("{:?}", sorted_arr);

    // Selection Sort
    // Sorting::selection_sort(&mut array);
    // println!("{:?}", array);
}
