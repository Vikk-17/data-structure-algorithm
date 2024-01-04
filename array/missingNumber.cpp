// Find the missing number in an array

#include<iostream>
using namespace std;

// Brute force approach
int missingNumber(int arr[], int n){
    // outer loop that runs from 1 to N for linear searching
    for(int i = 1; i<=n; i++){
        // flag var to check if
        // an element exists
        int flag = 0;

        // search the element using liner
        // search
        // we will have always n-1 element that's why to n-1
        for(int j = 0; j<n-1; j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }
        // in case of the element is missing
        if(flag==0) return i;
    }
    // never executed, just to avoid warnings
    return -1;
    // TC -> O(n*n) - in worst case scenario
    // SC -> O(1) - we don't use extra space
}

// Better approach
int missingNumberBetter(int arr[], int n){
    int hash[n+1] = {0};
    for(int i = 0; i<n-1; i++){
        hash[arr[i]] = 1;
    }

    for(int i = 1; i<n; i++){
        if(hash[i] == 0) return i;
    }
    return -1;
}

// Optimal Approach 1 - Using sum
int missingNumberOptimalSum(int a[], int N){
    int sum = (N * (N + 1)) / 2;
    int sum1 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        sum1 += a[i];
    }
    return sum - sum1;
    // TC - O(N)
    // SC - O(1)
}

// Optimal Approach2 - Using XOR process
int missingNumberOptimalXOR(int arr[], int n){
    // pending
}


int main(){
    int n = 5;
    int arr[] = {1, 2, 4, 5};

    cout << "The missing number is: " << missingNumberOptimalSum(arr, n) << endl;

    return 0;
}