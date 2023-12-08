#include<iostream>
using namespace std;

void selectionSort(int n, int arr[]){
    // n-2 because we don't need to swap the last element
    for(int i=0; i<=n-2; i++){
        // checking for the minimum
        int min = i;
        for(int j=i; j<=n-1; j++){
            if (arr[j] < arr[min]) min = j;
        }
        // swap between elements
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

// If we use didswap then number of iteration will be same b/w bubleSort and
// bubbleSort1 otherwise bubbleSort1 takes 6 but bubbleSort takes 5 iteration.
// slight difference.

void bubbleSort(int n, int arr[]){
    for(int i = n-1; i>=1; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        // optimization
        if (didSwap == 0) break;
        cout << "runs" << endl;
    }
}


void bubbleSort1(int n, int arr[]){
    for(int i = 0; i<=n-1; i++){
        int didswap = 0;
        // because whenever j = 5 then j+1 = 6, that contains garbage value
        // so that we'll run less than n-1 times
        for(int j = 0; j<n-1; j++){
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0) break;
        cout << "runs" << endl;
    }
}

void insertionSort(int n, int arr[]){
    for(int i=0; i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "run\n";
        }
    }
}

int main(void){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    bubbleSort(n, arr);
    
    for (int i = 0; i < n; i++) cout << arr[i] << " ";


    return 0;
}