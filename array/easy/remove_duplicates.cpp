/*
 * Remove Duplicates in-place from Sorted Array

Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.
 */

#include<bits/stdc++.h>
using namespace std;


// Brute force approach
// Time Complexity: O(N*logN) + O(N)
// Space Complexity: O(N) => to store the array
int removeDuplicateBruteForce(int arr[], int size) {
    set<int> st;

    // insert all the elements in the set
    for(int i = 0; i<size; i++) {
        st.insert(arr[i]);
    }

    // find the size of the set to return 
    int setSize = st.size();
    int i = 0;
    for(int x: st) {
        arr[i++] = x;
    }
    return setSize;
}

// Optimal => Two pointer approach
// Time Complexity: O(N)
// Space Complexity: O(1)
int removeDuplicateOptimal(int *arr, int n) {
    int i = 0;
    for(int j = 1; j<n; j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    // size of the new array
    return i + 1;
}

int main() {
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int setSize = removeDuplicateOptimal(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < setSize; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
