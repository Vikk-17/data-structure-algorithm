#include<bits/stdc++.h>
#include <climits>
#include <vector>
using namespace std;

// brute force
vector<int> findLeader(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    bool leader;

    for(int i = 0; i<n; i++) {
        leader = true;
        for(int j = i + 1; j<n; j++){
            if(nums[j] > nums[i]){
                leader = false;
                break;
            }
        }
        if (leader == true) ans.push_back(nums[i]); 
    }
    return ans;
}

// optimal
vector<int> findLeaderOptimal(vector<int>& nums) {
    vector<int> ans;
    int n = nums.size();
    int maxi = INT_MIN;
    
    // iterate from the back 
    for(int i = n-1; i>=0; i--){
        if(nums[i] > maxi) ans.push_back(nums[i]);

        // keep update the maximum element from the back
        maxi = max(maxi, nums[i]);
    }

    // based on the context return the ans
    sort(ans.begin(), ans.end());
    return ans;
}


int main() {
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    vector<int> ans = findLeaderOptimal(arr);
    for(auto it: ans){
        cout << it << endl;
    }
    return 0;
}
