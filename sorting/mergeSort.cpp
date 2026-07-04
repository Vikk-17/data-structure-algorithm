#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    // make a temporary array
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // sorting elements in the temporary array in a sorted manner.
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // if elements on the right half are still right
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    
    // transfering all elements from temp to arr 
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high){
    // base case
    if(low>=high) return;
    
    int mid = (low + high) / 2;
    
    //left half
    mergeSort(arr, low, mid);
    
    // right half
    mergeSort(arr, mid+1, high);
    
    // merging the left and right half
    merge(arr, low, mid, high);
}


int main(){
    int n = 5;
    vector<int> arr = {3, 2, 4, 1, 3};
    
    cout << "Before sorting the arr: " << endl;
    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // sorting
    mergeSort(arr, 0, n-1);

    // print the array afer sorting
    cout << "After sorting array: " << endl;
    for(auto it = arr.begin(); it != arr.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;

}