#include<bits/stdc++.h>
using namespace std;


void findSubarrays(int*, int);

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    findSubarrays(arr, n);
    return 0;
}

void findSubarrays(int* arr, int n) {
    // Starting point
    for(int i = 0; i<n; i++) {
        // Ending point
        for(int j = i; j<n; j++) {
            for(int k = i; k<=j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    } 
}

