/* 
 * Given two sorted arrays array1 and array2 of size n and m.
 * Find the union of them. In union there will be no duplicates element
 * */
#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int*, int*, int, int);
vector<int> FindUnionOptimal(int*, int*, int, int);
int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector < int > Union = FindUnionOptimal(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is " << endl;
    for (auto & val: Union)
        cout << val << " ";
    cout << endl;
    return 0;
}

// Bruteforce approach
// In this case, set will be used and it does not hold same element
// Time complexity:
// In the first loop: O(n1logn) where n is the size of the set
// In the second loop: O(n2logn)
// And in the last loop: O(n1+n2), in the worst case scenario if the elements of both the array is defferent.
// TC = O(n1logn+n2logn) + O(n1+n2)
// SC = O(n1+n2) + 0(n1+n2); first one for all unique element and second one for return the anse
vector<int> FindUnion(int *arr1, int *arr2, int n, int m) {
    vector<int> ans;
    set<int> st;
    // iterate through first array1
    for(int i = 0; i<n; i++) {
        st.insert(arr1[i]);
    }
    // iterate through first array1
    for(int i = 0; i<m; i++) {
        st.insert(arr2[i]);
    }
    // put the elements of set into the vecotr and return it
    for(auto it: st) {
        ans.push_back(it);
    }
    return ans;
}

// TC = O(n + m)
// SC = 0(n + m), to store the answer or else O(1)
vector<int> FindUnionOptimal(int *arr1, int *arr2, int n, int m) {
    vector<int> ans;
    int i = 0, j = 0;
    while(i<n && j<m) {
        if(arr1[i] <= arr2[j]) {
            if(ans.size() == 0 || ans.back() != arr1[i]) 
                ans.push_back(arr1[i]);
            i++;
        } else {
            if(ans.size() == 0 || ans.back() != arr2[j]) 
                ans.push_back(arr2[j]);
            j++;
        }
    }
    // if any element left in array1
    while(i < n) {
        if(ans.back() != arr1[i]) 
            ans.push_back(arr1[i]);
        i++;
    }
    // if any element left in array 2
    while(j < m) {
        if(ans.back() != arr2[j]) ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

