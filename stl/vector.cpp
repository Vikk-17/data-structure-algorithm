#include<iostream>
#include<vector>
using namespace std;

void explainVecotr(){
    vector<int> v;

    for(int i=1; i<=5; i++){
        v.push_back(i);
        // or v.emplace_back(i);
    }

    vector<int>::iterator k = v.begin();
    k++;
    cout << *(k); 

    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    explainVecotr();
    return 0;
}