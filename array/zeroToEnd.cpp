#include<iostream>
#include<vector>
using namespace std;

// Brute force approach
vector<int> zerosToEnd(vector<int>& arr){
    int n = arr.size();
    vector<int> nz, z;
    
    for(int i = 0; i<n;i++){
        if(arr[i]!= 0) nz.push_back(arr[i]);
        else z.push_back(arr[i]);   
    }

    for(int i = 0; i<z.size(); i++){
        nz.push_back(z[i]);
    }
    return nz;
}


// optimal approach


vector<int> moveZeros(vector<int> arr, int n){
    if (n == 0) return arr;
    int j = -1;
    //find the first occurance of zero
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    // if there is no zero
    if(j == -1) return arr;

    // swap b/w zero and non-zero
    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;

}

int main(){
    
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    vector<int> ans = moveZeros(arr, 10);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}