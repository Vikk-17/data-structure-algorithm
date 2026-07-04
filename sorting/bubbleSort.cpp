#include<iostream>
#include<vector>
using namespace std;


void bubbleSort(int n, vector<int>& arr){
    for(int i = n-1; i>=1; i--){
        int didSwap = 0;
        // check for the element
        for(int j = 0; j<=i-1; j++){
            // if larger than swap between them
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        // optimization
        // if it is already sorted, we can use the flag to skip the remaining
        // process
        if(didSwap == 0) break; // TC: O(n) (Best) otherwise O(n^2) (Worst / Avg)
        // Space complexity O(1)
        cout << "runs" << endl;
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
    bubbleSort(n, arr);
    
    // print the array
    for(auto it = arr.begin(); it!= arr.end(); it++){
        cout << *it << " ";
    }
    
    cout << endl;

    return 0;
}