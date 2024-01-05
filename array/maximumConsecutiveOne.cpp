// Problem Statement: Given an array that contain only
// 1 abd 0 return the count of maximum consecutive ones
// in the array.

/*
example: prices = {1, 1, 0, 1, 1, 1};
output = 3
Explaination: There are two consecutive 1's and three
consecutive 1's in the array out of which max is 3
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        int findMaxConsecutiveOnes(vector<int>& nums){
            int count = 0;
            int maxi = 0;
            for(int i = 0; i< nums.size(); i++){
                if(nums[i] == 1) {
                    count ++;
                } else {
                    count = 0;
                }
               maxi = max(count, maxi);
            }
            return maxi;
        }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are: " << ans << endl;
    return 0;
}