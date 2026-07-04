/* 
Problem statement
You are given a sorted array 'arr' of positive integers of size 'n'.



It contains each number exactly twice except for one number, which occurs exactly once.



Find the number that occurs exactly once.



Example :
Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

Output: 2

Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.

*/

// Brute Approach
// Better Approach
// Optimal Approach

#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
    int n = arr.size();
    // a ^ a = 0;
    // a ^ 0 = a;
    int xorr = 0;
    for(int i = 0; i<n; i++) xorr = xorr ^ arr[i];
    return xorr;
}

int main(){

    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    cout << "The single element is: " << getSingleElement(arr) << endl;
}

// Time complexity is O(N)
// Space Complexity is O(1)