#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int main(){
    int x, y;
    cout << "Enter two number >>> ";
    cin >> x >> y;
    cout << "Numbers befor swap >>> ";
    cout << x << " " << y << endl;
    swap(x, y);
    cout << "Numbers after swap >>> ";
    cout << x << " " << y << endl;

    return 0;
}
