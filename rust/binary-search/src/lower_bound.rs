pub struct LowerBoundSearch;

impl LowerBoundSearch {
    pub fn lower_bound_search(nums: Vec<i32>, target: i32) -> i32 {
        // if the number is exist; return that number
        if nums.is_empty() {
            return -1;
        }

        let mut low = 0;
        let mut high = nums.len() - 1;
        // if no lower bound exists return this value
        let mut result = nums.len();

        while low <= high {
            let mut mid = low + (high - low) / 2;
            if mid != 0 && nums[mid] >= target {
                result = mid;
                high = mid - 1;
                // return mid as i32;
            } else {
                low = mid + 1;
            }
        }
        result as i32
    }
}
