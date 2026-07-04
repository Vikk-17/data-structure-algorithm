#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    
    // brute force approach
    // int n = a.size();
    // int m = b.size();

    // set<int> st;
    // vector<int> temp;

    // for(int i = 0; i<n; i++){
    //     st.insert(a[i]);
    // }
    // for(int i = 0; i<m; i++){
    //     st.insert(b[i]);
    // }
    
    // for(auto it: st){
    //     temp.push_back(it);
    // }
    // return temp;
    // TC - O(n*m) -> as nested loop
    // SC - O(m) -> as visited array size of arr2 i.e., m

    // optimal approach
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    int i = 0, j = 0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(ans.size() == 0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size() == 0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(ans.size()==0|| ans.back() != a[i]){
            ans.push_back(a[i]);
        }
        i++;

    }

    while(j<m){
        if(ans.size()==0 || ans.back() != b[j]){
            ans.push_back(b[j]);
        }
        j++;
    }


    return ans;
    // Time Complexity -> O(n + m) - worst case
    // Space Complexity -> O(1) - We don't use any extra space
}
