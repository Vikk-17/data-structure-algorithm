#include<iostream>
using namespace std;


// left rotate an array by 1 place
void leftR(int arr[], int n){
    if (n==0) return ;
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

// left rotate an array by d place
void leftRotate(int arr[], int n, int d){
    if(n == 0) return;
    // get effective rotation -> optimization
    d=d%n;
    if(d==0) return;

    // shift the first d element to the temp aray
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

    // shift the last n-d elemetns to the front of the array
    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }

    // shift the temp elements to the last of the array
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}

// reversal algorithm
void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
}

void leftRotateRev(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}


int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d = 3;

    leftR(a, 7);

    for(int i = 0;i<n; i++){
        cout << a[i] << " ";
    }
    
    cout << endl;

    return 0;
}
