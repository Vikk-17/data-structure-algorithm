// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
//
// You must write an algorithm with O(log n) runtime complexity.
//
//
//
// Example 1:
//
// Input: nums = [-1,0,3,5,9,12], target = 9
// Output: 4
// Explanation: 9 exists in nums and its index is 4
//
// Example 2:
//
// Input: nums = [-1,0,3,5,9,12], target = 2
// Output: -1
// Explanation: 2 does not exist in nums so return -1
//
//
// Constraints:
//     1 <= nums.length <= 104
//     -104 < nums[i], target < 104
//     All the integers in nums are unique.
//     nums is sorted in ascending order.

pub trait Search {
    fn linear_search(nums: Vec<i32>, target: i32) -> i32;
    fn binary_search(nums: Vec<i32>, target: i32) -> i32;
}

pub struct Solution;
impl Search for Solution {
    fn linear_search(nums: Vec<i32>, target: i32) -> i32 {
        if nums.is_empty() {
            return -1;
        }
        let size = nums.len();
        for i in 0..size - 1 {
            if nums[i] == target {
                return i as i32;
            }
        }
        -1
    }

    fn binary_search(nums: Vec<i32>, target: i32) -> i32 {
        // early return if empty array
        if nums.is_empty() {
            return -1;
        }

        let mut low: usize = 0;
        let mut high: usize = nums.len() - 1;

        while high >= low {
            let mid = low + (high - low) / 2;
            if nums[mid] == target {
                return mid as i32;
            } else if nums[mid] > target {
                // Possible case:
                // The condition 'high >= low' with 'high = mid - 1'
                // where high is usize can cause an underflow panic
                // when mid is 0, failing the O(log n) worst-case requirement
                // for certain inputs.

                if mid == 0 {
                    return -1;
                }
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        -1
    }
}
