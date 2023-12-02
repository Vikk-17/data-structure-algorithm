#include<iostream>
using namespace std;

void numHashing(){
    int arrayLen;
    cin >> arrayLen;

    int arr[arrayLen];
    for(int i=0; i<arrayLen; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i=0; i<arrayLen; i++){
        hash[arr[i]] += 1;
    }

    // queries
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
}

void charHashing(){
    string s;
    cin >> s;


    // precompute
    // toatal 26 elements
    // only lower case hash[s[i] - 'a']
    // uppercase hash[s[i] - 'A']
    // both hash[s[i]] and total number to be used is 256 rather than 26
    int hash[26] = {0};
    for(int i=0; i<=s.size(); i++){
        hash[s[i]- 'a'] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c- 'a'] << endl;
    }
}
// we can't do the problems with large number of array like 10^9
// so we have to use stl to solve this situation
// inside main function arr[10e6] and globally arr[10e7] max
// hasing using map stl

#include<map>
void numHashMap(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] += 1;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mp[number] << endl;
    }
}


int main(){
    // numHashing();
    // charHashing();
    numHashMap();
    return 0;
}