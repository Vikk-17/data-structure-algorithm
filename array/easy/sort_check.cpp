#include<bits/stdc++.h>
using namespace std;


// Brute force approach
// Time complexity: O(N^2)
// Space complexity: O(1)
bool isSortBruteForce(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        for(int j = i + 1; j<n; j++) {
            if(arr[i] > arr[j]) return false;
        }
    }
    return true;
}

// Optimal
// Time complexity: O(N)
// Space complexity: O(1)
bool isSortOptimal(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        if(arr[i] < arr[i-1]) return false;
    }
    return true;
}

int main() {
    // unsorted array
    int arr1[] = {2, 3, 1, 5, 19};
    // sorted array
    int arr2[] = {1, 2, 3, 4, 5};
    bool sorted = isSortOptimal(arr1, 5);
    if (sorted) cout << "Array is sorted" << endl;
    else cout << "Array is not sorted" << endl;
    return 0;
}
