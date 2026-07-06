fn binary_search<T: Ord>(arr: &[T], target: &T) -> Option<usize> {
    let mut low = 0;
    let mut high = arr.len();

    while high > low {
        let mid = low + (high - low) / 2;

        if &arr[mid] == target {
            return Some(mid);
        } else if &arr[mid] < target {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    None
}

fn main() {
    let arr = vec![1, 3, 5, 7, 9];

    println!("{:?}", binary_search(&arr, &7)); // Some(3)
    println!("{:?}", binary_search(&arr, &2)); // None
}
