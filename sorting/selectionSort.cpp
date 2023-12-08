#include<iostream>
#include<vector>
using namespace std;


void selectionSort(int n, vector<int>& arr){
    /*
    1. Get the minimun
    2. Swap
    3. Repeat
    The algo is called selection sort because it repeatedly
    selecting the min element.
    Easy to implement and does not require an additional space
    */

   // n-2 because we don't need to swap the last element
   // but we can use n-1.
    for(int i=0; i<=n-2; i++){
        int min = i;
        // check for the minimum
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[min]) min = j;
        }

        // swap element
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

}

int main(){
    int n;
    cin >> n;
    
    vector<int> arr;
    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        arr.push_back(num);
    }
    
    // sorting
    selectionSort(n, arr);
    
    // print the array
    for(auto it = arr.begin(); it!= arr.end(); it++){
        cout << *it << " ";
    }
    
    cout << endl;

    return 0;
}

/*
Time complexity: O(n^2) [Best / Worst / Avg]
(n-1) times
(n-2) times
..
..
..
1 time
then (n-1) + (n-2) + (n-3) + ... + 2 + 1 = n(n-1)/2 ~ n^2

Since, it does not require additional space, space complexity is O(1)
*/