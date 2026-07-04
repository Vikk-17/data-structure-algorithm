#include <iostream>
#include <vector>
using namespace std;

void insertionSort(int n, vector<int>& arr){
    for(int i = 0; i<=n-1; i++){
        int j = i;
        while(j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "run" << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }

    // sorting
    insertionSort(n, arr);

    // print the array
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;

    return 0;
}

/*
Analysis:
Worst case occurs when for every i the inner loop has to 
move all elements
1 + 2 + 3 + 4 + 5 ... + n-1
i.e., O(n^2)

For the avg case O(n^2)

For the best case O(n) because there will be no swap in between
for example {1, 2, 3, 4, 5, 6}
*/