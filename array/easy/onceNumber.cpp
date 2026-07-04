#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        // Brute force approach => linear search
        // TC = O(N^2)
        // SC = O(1), no extra space
        int getSingleElement(vector<int>& nums) {
            int size = nums.size();
            for(int i = 0; i<size; i++) {
                int cnt = 0;
                for(int j = 0; j<size; j++) {
                    if(nums[i] == nums[j]) cnt++;
                }
                if(cnt == 1) return nums[i];
            }
            return -1;
        }

        // Better => hashing
        // Simple hasing wont be working for array with negative values
        // so we need to shift the index 
        // map solves this problem of negative indexing
        // TC = O(3N)
        // SC = O(maxi - mini + 1), otherwise O(maxi + 1)
        int getSingleElementHashing(vector<int>& nums) {
            int size = nums.size();
            // Need to find the max element to define the size of the hash
            int maxi = nums[0]; // start with first element
            int mini = nums[0];
            for(int i = 0; i<size; i++) {
                maxi = max(maxi, nums[i]);
                mini = min(mini, nums[i]);
            }
            // intialize the hash
            int range = maxi - mini + 1;
            vector<int> hash(range + 1, 0);
            for(int i = 0; i<size; i++) {
               hash[nums[i] - mini] ++; 
            }

            for(int i = 0; i<size; i++) {
                if(hash[nums[i] - mini] == 1) return nums[i];
            }
            return -1;
        }
        // Better approach with map 
        // TC = O(N*logM) + O(M)
        // To insert one element into map it takes logM time where M is the size of the map
        // Then iteration through map took O(M) time
        // M = (N/2) + 1
        // SC = O(M), to store element in map data sturcture
        // where M = (N/2) + 1;
        int getSingleElementMap(vector<int>& nums) {
            int size = nums.size();
            map<int, int> mpp;
            for(int i = 0; i< size; i++) {
                mpp[nums[i]] ++;
            }
            for(auto it: mpp){
                if(it.second == 1) return it.first;
            }
            return -1;
        }
        
        // Optimal approach with xor 
        // TC = O(N)
        // SC = O(1)
        int getSingleElementXOR(vector<int>& nums) {
            int size = nums.size();
            int xorr = 0;
            for(int i = 0; i<size; i++) {
                xorr = xorr ^ nums[i];
            }
            return xorr;
        }
};


int main() {
    vector<int> arr = {4, 1, 2, 1, 2};
    vector<int> arr1 = {-3, -1, -3, 2, -1, 4, 2};
    Solution obj;
    int ans = obj.getSingleElementXOR(arr1);
    cout << "The single element is: " << ans << endl;
    return 0;
}
