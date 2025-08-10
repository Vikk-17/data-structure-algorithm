/*
 * We have to find second largest and second smallest element in the given array
 */

#include<bits/stdc++.h>
#include <climits>
using namespace std;

// brute force approach
// sort and select elements
// In this case 
// Time complexity : O(N*logN)
// Space complexity: O(1)
void getElements(int arr[], int size) {
    // edge case, if there is single or no element at all 
    if(size < 2)
        cout << "Second smallest " << -1 << ", " << "Second largest: " << -1 << endl; 
    
    sort(arr, arr+size);
    int second_smallest = arr[1];
    int second_largest = arr[size-2];

    cout << "The second smallest element is: " << second_smallest << endl;
    cout << "The second largest element is: " << second_largest << endl;
}

// Better approach
// In this case 
// Time complexity : O(N)
// Space complexity: O(1)
// But the problem still there are two loops
void getElementsBetter(int arr[], int size) {
    if(size < 2)
        cout << "Second smallest " << -1 << ", " << "Second largest: " << -1 << endl; 

    int smallest = INT_MAX, largest = INT_MIN;
    int second_smallest = INT_MAX, second_largest = INT_MIN; 

    // find the smallest and largest elements
    for(int i = 0; i<size; i++) {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // find the second_smallest and second_largest with loop
    for(int i = 0; i<size; i++) {
        if(arr[i] != smallest && arr[i] < second_smallest)
            second_smallest = arr[i];
        if(arr[i] != largest && arr[i] > second_largest)
            second_largest = arr[i];
    }

    cout << "The largest element is: " << largest << ", "
        "The second_largest element is: " << second_largest << ", " \
        "The smallest element is: " << smallest << ", " \
        "The second_smallest element is: " << second_smallest << endl;
}

// Optimal
// Time complexity : O(N)
// Space complexity: O(1)

void getElementsLargestOptimal(int arr[], int size) {
    if(size < 2)
        cout << "Second largest: " << -1 << endl; 

    int largest = INT_MIN, second_largest = INT_MIN;
    
    for(int i = 0; i<size; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest) {
            second_largest = arr[i];
        }
    }
    cout << "The largest element is: " << largest << ", " \
        "The second largest element is: " << second_largest << endl;
}

void getElementsSmallestOptimal(int arr[], int size) {
    if(size < 2)
        cout << "Second smallest: " << -1 << endl; 

    int smallest = INT_MAX, second_smallest = INT_MAX;
    
    for(int i = 0; i<size; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=smallest) {
            second_smallest = arr[i];
        }
    }
    cout << "The smallest element is: " << smallest << ", " \
        "The second smallest element is: " << second_smallest << endl;
}

int main() {
    int arr1[] = {3, 2, 1, 5, 4, 10, 9, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]); 

    // getElements(arr1, n);
    // getElementsBetter(arr1, n);
    getElementsLargestOptimal(arr1, n);
    getElementsSmallestOptimal(arr1, n);

    return 0;
}
