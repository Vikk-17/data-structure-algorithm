#include<iostream>
using namespace std;


// Right rotate an array by 1 place
void rightR(int arr[], int n){
    int temp = arr[n-1];
    for(int i = n-2; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}

// right rotate an array by d place
void rightRotate(int arr[], int n, int d){
    if(n == 0) return ;
    d = d%n;
    int temp[d];
    for(int i = n-d; i<n; i++){
        temp[i-(n-d)] = arr[i];
    }
    for(int i = n-d-1; i>=0; i--){
        arr[i+d] = arr[i];
    }
    for(int i = 0; i<d; i++){
        arr[i] = temp[i];
    }
}

// right rotate reversal algorithm
void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

void rightRotateRev(int arr[], int n, int d){
    // reverse first n-d element
    reverse(arr, 0, n-d-1);
    // reverse last d elements
    reverse(arr, n-d, n-1);
    // reverse whole array
    reverse(arr, 0, n-1);
}


int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d = 3;

    rightRotateRev(a, 7, 3);

    for(int i = 0;i<n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;
    return 0;
}