#include<bits/stdc++.h>
using namespace std;


// brute force approach
int findLargestBrute(vector<int>& arr){
    int size = arr.size();

    sort(arr.begin(), arr.end());

    return arr[size-1];
}


// optimal solution
int findLargestOptimal(int arr[], int n) {
    int maxi = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] >= maxi) maxi = arr[i];
    }
    return maxi;
}

int main() {
    vector<int> arr = {2, 3, 5, 1, 0};
    int max = findLargestBrute(arr);
    cout << "The largest element in the array: " << max << endl;

    int arr1[] = {2, 3, 10, -20, 0};
    int n1= 5;

    int max1 = findLargestOptimal(arr1, n1);
    cout << "The largest element in the array: " << max1 << endl;
    return 0;
}
