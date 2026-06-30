#include<iostream>
using namespace std;


int main() {
    int w;
    cin >> w;
    // or 
    // if(w == 2) { cout << "NO" << endl;}
    if(w%2 == 0 && w > 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
