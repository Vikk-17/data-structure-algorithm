#include<bits/stdc++.h>
using namespace std;

// brute force
int majorityElementBruteForce(vector<int>& nums){
    int n = nums.size();
    for(int i = 0; i<n; i++) {
        int cnt = 0;
        for(int j = 0; j<n; j++) {
            if(nums[i] == nums[j]) cnt ++;
        }
        if (cnt > n/2) return nums[i];
    }
    return -1;
}

// better = hashmap
int majorityElementBetter(vector<int>& nums) {
    map<int, int> mpp;
    for(int i = 0; i<nums.size(); i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp) {
        if(it.second > (nums.size()/2)) {
            return it.first;
        }
    }
    return -1;
}


// Optimal Solution => Moore's Voting algorithm
// Step1 => Apply the algorithm
// Step2 => Verification of the element

int majorityElementOptimal(vector<int>& nums) {
    int ele, cnt = 0;
    // moore's voting
    for(int i = 0; i<nums.size(); i++) {
        if(cnt == 0) {
            ele = nums[i];
            cnt = 1;
        }
        else if(nums[i] == ele) cnt ++;
        else cnt --;
    }

    // Verification
    int cnt1 = 0;
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] == ele) cnt1++;
    }
    if(cnt1 > (nums.size() / 2)) return ele;

    return -1;
}

int main() {
    // majorityElement(vector<int> &nums)
}
