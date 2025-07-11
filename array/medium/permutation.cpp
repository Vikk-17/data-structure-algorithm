/*
Problem link https://leetcode.com/problems/permutations/description/

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
 
Constraints:
1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.
 */

#include<bits/stdc++.h>
using namespace std;


void recursivePermutation(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, vector<int>& freq){
    // base case
    if(ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
    }

    for(int i = 0; i<nums.size(); i++) {
        if(!freq[i]) {
            ds.push_back(nums[i]);
            freq[i] = 1;
            recursivePermutation(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    int n = nums.size();
    vector<int> freq (n , 0);

    recursivePermutation(ds, nums, ans, freq);

    return ans;
}


int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = permute(nums);
    
    cout << "Permutations:" << endl;
    for(auto perm : result) {
        for(int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
    return 0;
}
