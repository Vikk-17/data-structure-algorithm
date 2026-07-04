#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums) {
            int counter = 0, maxi = 0, size = nums.size();
            for(int i = 0; i<size; i++) {
                if(nums[i] == 1) counter ++;
                else if(nums[i] == 0) counter = 0;

                maxi = max(maxi, counter);
            }
            return maxi;
        }

        /* 
         * Time Complexity = O(N), N size of the array
         * Space Complexity = O(1), no extra space has been used
         * */
};

int main() {
    vector < int > nums = { 1, 1, 0, 1, 1, 1 };
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum  consecutive 1's are " << ans;
    cout << endl;
    return 0;
}
