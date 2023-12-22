#include<iostream>
#include<vector>
using namespace std;

// Left Rotate an array by 1 place
vector<int> leftArray(vector<int>& arr, int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    return arr;
}

vector<int> rightRotate(vector<int>& arr, int n){
    int temp = arr[n-1];
    for(int i=n-1; i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    return arr;
}


int main(){

    vector<int> a = {1, 2, 3, 4, 5};
    rightRotate(a, 5);
    
    for(int i=0; i<5;i++){
        cout << a[i] << endl;
    }

    return 0;
}