// Find the missing number in an array
// given an integer n and size of the array n-1 containing n-1 numbers b/w 1 to n 
// find the number b/w that range that is missing
#include <bits/stdc++.h>
using namespace std;


// Bruteforce => linear search
// TC = O(n^2)
// SC = O(1)
int missingNumber(vector<int>& arr, int n) {
    // iterate through in a number range
    for(int i = 1; i<=n; i++) {
        int flag = 0;
        // iterate through the array
        for(int j = 0; j<n-1; j++) {
            // check if the number is present
            if(arr[j] == i){
                flag = 1; // flag = 1, number is present
                break;
            }
        }
        // if number is not present that means flag = 0, return i
        if (flag == 0) return i;
    }
    return -1;
}


// Better approach => Hashmap
// TC = O(3n)
// SC = O(n)
int missingNumberBetter(vector<int>& arr, int n) {
    int hash[n + 1];

    for(int i = 0; i<n+1; i++) hash[i] = 0; 

    for(int i = 0; i<n-1; i++) 
        hash[arr[i]] ++;

    // checking  the frequencies for the number 1 to n 
    for(int i = 1; i<=n; i++) {
        if(hash[i] == 0) return i;
    }
    return -1;
}

// Optimal approach using xor
// TC = O(N)
// SC = O(1)
int missingNumberOptimal(vector<int>& arr, int n) {
    int xor1 = 0, xor2 = 0;
    for(int i = 0; i<n-1; i++){
        xor2 = xor2 ^ arr[i]; // xor of array elements
        xor1 = xor1 ^ (i+1); // xor upto [1..n-1]
    }
    xor1 = xor1 ^ n;
    return (xor1 ^ xor2);
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumberOptimal(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
    return 0;
}
