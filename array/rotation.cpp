#include<iostream>
#include<vector>
using namespace std;


// Reverse an array
void Reverse(vector<int>& arr, int start, int end){
    
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

// Left Rotate an array by 1 place
vector<int> leftArray(vector<int>& arr, int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    return arr;
}

// Left rotate an array by d places
void leftRotateD(vector<int>& arr, int d, int n){
    if (n == 0) return;
    
    // effective rotation
    d = d%n;

    if(d>n) return;

    // make temp array to store first d element
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

    // shift n-d elements to the front of the array
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }

    // now shift the elemtnts of temp to the last of the array
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}


// Left rotate an array by d place, reverseal algorithm
void leftRoatateDRev(vector<int>& arr, int n, int d){
    // Reverse first d element of array
    Reverse(arr , 0, d-1);
    // Reverser last n-d elements of array
    Reverse(arr, d, n-1);
    // Reverse the whole array
    Reverse(arr, 0, n-1);
}



// Right Rotate an array by 1 place
vector<int> rightRotate(vector<int>& arr, int n){
    int temp = arr[n-1];
    for(int i=n-1; i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    return arr;
}


int main(){

    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int n = a.size();
    leftRotateD(a, n, 3);
    
    for(int i=0; i<n;i++){
        cout << a[i] << endl;
    }

    return 0;
}



/* Coding Ninja
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    
    vector<int> temp;
    k=k%n;

    for(int i = k; i<n; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0; i<k; i++){
        temp.push_back(arr[i]);
    }
    return temp;
}

*/