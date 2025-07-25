#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()] = {0};
    recPermute(ds, nums, ans, freq);
}

void recPermute(vector<int>& ds, vector<int>& nums, vector<vector<int>>& ans, vector<int> freq) {
    // base case
    if(ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
    }

    for(int i = 0; i<nums.size(); i++) {
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i] = 1;
            recPermute(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}


int main() {
    
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;

    ans = permute(arr);
    cout << ans << endl;
    return 0;
}
