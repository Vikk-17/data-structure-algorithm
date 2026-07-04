#include<bits/stdc++.h>
using namespace std;

// Union of the two array
// Solution 1: using set
vector<int> setUnion(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();

    set<int> st;
    vector<int> temp;

    for(int i = 0; i<n; i++){
        st.insert(arr1[i]);
    }
    for(int i = 0; i<m; i++){
        st.insert(arr2[i]);
    }

    for(auto it: st){
        temp.push_back(it);
    }

    return temp;
}

// solution 2: Two pointer solution , optimal solution
vector<int> findUnion(vector<int> arr1, vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;

    int i = 0, j = 0;
    while(i<n && j<n){
        if(arr1[i]<=arr2[j]){
            if(ans.size() == 0 || ans.back() != arr1[i]){
                ans.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if(ans.size() == 0 || ans.back() != arr2[j]){
                ans.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(ans.size() == 0 || ans.back() != arr1[i]){
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(ans.size() == 0 || ans.back() != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }

    return ans;
}


int main(){

    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12};
    
    vector < int > stUnion = setUnion(arr1, arr2);


    cout << "Union of arr1 and arr2 is  " << endl;
    
    for (auto & val: stUnion){
        cout << val << " ";
    }
    for(auto it: stUnion){
        cout << it << " ";
    }

    return 0;
}