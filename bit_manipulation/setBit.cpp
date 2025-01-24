// A number is given and check the i'th bit is set or not of that number
// using left shift right shift

#include<bits/stdc++.h>
using namespace std;


int leftShiftSetValue(int num, int i){
    if((num & (1 << i)) != 0) return 1; //set bit
    else return 0;
}

int rightShiftSetValue(int num, int i){
    if(((num >> i) & 1) != 0) return 1; //set bit
    else return 0;
}

int main(){
    int number, i;
    cout << "Enter number and i th bit to check: ";
    cin >> number >> i;
    
    (leftShiftSetValue(number, i)) ? cout << "The " << i << " th bit is set\n" \
        : cout << "The " << i << " th bit is not set" << endl;
    
    (rightShiftSetValue(number, i)) ? cout << "The " << i << " th bit is set\n" \
        : cout << "The " << i << " th bit is not set" << endl;

    return 0;
}
