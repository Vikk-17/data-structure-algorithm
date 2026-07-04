#include<bits/stdc++.h>
using namespace std;


// Iterative Approach
int binarySearch(vector<int> &nums, int target){

  int n = nums.size();
  // sizeof(arr) / sizeof(arr[0]);
  int low = 0, high = n - 1;

  // perform the steps:
  while(high >= low){
    int mid = (low + high) / 2;
    if(nums[mid] == target) return mid;
    else if (target > nums[mid]) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}

// Recursive Approach 


int main(){
  vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
  int target = 6;
  int ind = binarySearch(arr, target);
  if (ind == -1) cout << "The target is not present." << endl;
  else cout << "The target is at index: " << ind << endl;
  return 0;
}
