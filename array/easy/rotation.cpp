#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(N);
// Spcae Complexity: O(1)
void leftRotate(int *arr, int n) {
    if (arr == NULL || n<=1) return ; 
    int temp = arr[0];
    for(int i = 1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

void leftRotateByD(int *arr, int n, int d) {
    if (arr == NULL || n<=1) return; 
    
    // if d>n => round to < n; optimization
    d = d % n;
    if(d == 0) return;
    
    int temp[d];

    // shift first d elements to d
    for(int i = 0; i<d; i++) {
        temp[i] = arr[i];
    }
    // shift n-d elements to left
    for(int i = d; i<n; i++) {
        arr[i-d] = arr[i];
    }

    // again shift temp's elements into original array
    for(int i = n-d; i<n; i++) {
        arr[i] = temp[i-(n-d)];
    }
}

void rightRotateByD(int *arr, int n, int d) {
    if (arr == NULL || n <= 1) return;
    d = d % n;
    if(d == 0) return;

    int temp[d];
    // shift last d elements to temp
    for(int i = n-d; i<n; i++) {
        temp[i-(n-d)] = arr[i];
    }

    // shift rest first n-d elements to right by d 
    for(int i = n-d-1; i>=0; i--) {
        arr[i+d] = arr[i];
    }

    for(int i = 0; i<d; i++) {
        arr[i] = temp[i];
    }
}

// Reversal algorithm
void reverse(int *arr, int start, int end) {
    int temp;
    while(start <= end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++, end--;
    }
}

void leftRotateRev(int *arr, int n, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

void rightRotateRev(int *arr, int n, int d) {
    reverse(arr, d+1, n-1);
    reverse(arr, 0, d);
    reverse(arr, 0, n-1);
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d = 3;

    // int arr1[] = {1};
    // int n1 = 1;
    // leftRotateByD(arr, n, d);

    rightRotateRev(arr, n, d);

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
