#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;
    // int count = 0;
    for (int i = 0; i < n; i++) { // starting index
        long long s = 0; // Sum variable
        for (int j = i; j < n; j++) { // ending index
            // add the current element to
            // the subarray a[i...j-1]:
            s += a[j];

            if (s == k){
                len = max(len, j - i + 1);
                // count ++; // in leetcode they asked for total number of subarray
            }
        }
    }
    return len;
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    vector<int> b = {1, 2, 1, 2, 1};
    // long long k = 10;
    long long k = 3;
    int len = getLongestSubarray(b, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
