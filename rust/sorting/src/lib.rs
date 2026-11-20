use std::io;

pub struct Sorting;

impl Sorting {
    pub fn selection_sort(arr: &mut Vec<i32>) -> Vec<i32> {
        // 1. Get the minimum
        // 2. Swap
        // 3. Repeat

        let size = arr.len();
        for i in 0..size - 1 {
            let mut min = i;
            for j in i + 1..size {
                if arr[j] < arr[min] {
                    min = j;
                }
            }
            // swap
            if min != i {
                arr.swap(i, min);
            }
        }
        std::mem::take(arr)
    }

    pub fn bubble_sort(arr: &mut Vec<i32>) -> Vec<i32> {
        let size = arr.len();
        for i in 0..size - 1 {
            let mut is_swap: bool = false;
            for j in 0..size - 1 - i {
                if arr[j] > arr[j + 1] {
                    arr.swap(j, j + 1);
                    is_swap = true;
                }
            }
            if !is_swap {
                break;
            }
        }
        // take the ownwership and return: &mut Vec<T> -> Vec<T>
        // the arr is now empty (Vec::new())
        // zero copying(zero cost): leaves an empty vec
        // behind the original reference
        std::mem::take(arr)

        // also we can use .clone()
        // arr.clone()
    }
}

pub fn take_input() -> Vec<i32> {
    let mut input = String::new();

    // Read the size to capture
    // io::stdin().read_line(&mut input).unwrap();
    // let size: usize = input.trim().parse::<usize>().unwrap();

    // flush the input
    // input.clear();

    // Read the array
    io::stdin().read_line(&mut input).unwrap();
    // let mut arr: Vec<i32> = Vec::with_capacity(size);
    let mut arr: Vec<i32> = Vec::new();
    arr.extend(
        input
            .split_whitespace()
            // .take(size)
            .map(|value| value.parse::<i32>().unwrap()),
    );
    arr
}
