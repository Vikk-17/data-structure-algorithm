use std::io;

fn take_input() -> Vec<i32> {
    let mut input = String::new();
 
    // Read the size to capture
    io::stdin().read_line(&mut input).unwrap();
    let size: usize = input.trim().parse::<usize>().unwrap();

    // flush the input
    input.clear();

    // Read the array
    io::stdin().read_line(&mut input).unwrap();
    let mut arr: Vec<i32> = Vec::with_capacity(size);
    arr.extend(
        input
        .split_whitespace()
        .take(size)
        .map(|value| value.parse::<i32>().unwrap())
    );
    arr
}

fn selection_sort(arr: &mut Vec<i32>) {
    // 1. Get the minimum
    // 2. Swap
    // 3. Repeat

    let size = arr.len();
    for i in 0..size-1 {
        let mut min = i;
        for j in i+1..size {
            if arr[j] < arr[min]{
                min = j;
            }
        }
        // swap
        if min != i {
            arr.swap(i, min);
        }

    }
}

fn main() {
    let mut array: Vec<i32> = take_input();
    // sort
    selection_sort(&mut array);
    println!("{:?}", array);
}
