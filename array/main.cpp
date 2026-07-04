#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int largestElement(vector<int>& arr, int n){
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}

int secondLargest(vector<int>& arr, int n){
    int largest = arr[0];
    int slargest = -1; // Assuming there is no negative
    // or we can use INT_MIN if there is negative

    for(int i = 0; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>largest && arr[i]<slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int>& arr, int n){
    int smallest = arr[0];
    int secSmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<smallest){
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secSmallest && arr[i]!=smallest){
            secSmallest = arr[i];
        }
    }
    return secSmallest;
}

// check if the array is sorted or not
bool isSorted(int n, vector<int>& arr){
    for(int i= 1; i<n; i++){
        if(arr[i]>=arr[i-1]){}
        else return false;
    }
    return true;
}

// remove duplicates element from the array
// and return the length of the new array
int removeDuplicates(vector<int>& arr, int n){
    int i = 0;
    for(int j = 0; j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){

    vector<int> a = {1, 2, 4, 7, 7, 5};
    cout << secondLargest(a, 6) << endl;
    cout << secondSmallest(a, 6) << endl;

    return 0;
}
