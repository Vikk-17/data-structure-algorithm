#include<bits/stdc++.h>
using namespace std;

void printNatural(int i, int n){
    // Print natural number from i to n 
    if(i>n) return;
    cout << i << endl;
    printNatural(i+1, n);
}

void printNaturalRev(int i, int n){
    // if(n<i) return;
    // cout << n << endl;
    // printNaturalRev(i, n-1);
    if (i<1) return;
    cout << i << endl;
    printNaturalRev(i-1, n);
}


void printNaturalBackTrack(int i, int n){
    // 1 --> N by using backtracking
    if(i<1) return;
    printNaturalBackTrack(i-1, n);
    cout << i << endl;
}

void printNaturalBackTrackRev(int i, int n){
    // N --> 1 by using backtracking
}

void printName(int i, int n){
    if (i>n) return;
    cout << "Souvik" << endl;
    printName(i+1, n);
}


int additionNatural(int n){
    if(n==0) return 0;
    return n + additionNatural(n-1);
}

int factorial(int n){
    if(n==0) return 1;
    return n * factorial(n-1);
}

void arrayRev(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    arrayRev(arr, i+1, n);
}


bool palindrome(int i, string &s){
    if(i>= s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return palindrome(i+1, s);
}

int fibonacci(int n){
    if(n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    // cout << factorial(6) << endl;
    // cout << additionNatural(50) << endl;
    // printNatural(lowerValue, upperValue);
    // printNaturalRev(upperValue, upperValue);
    // printNaturalBackTrack(1000, 1000);
    // printName(lowerValue, upperValue);
    
    // For reversing the array
    // int n;
    // cin >> n;
    // int numArray[n];
    // for(int i=0; i<n; i++) cin >> numArray[i]; 
    // arrayRev(numArray, 0, n);
    // for(int i=0; i<n; i++) cout << numArray[i] << " ";
    // cout << endl;

    // string s = "madam";
    // cout << palindrome(0, s);

    cout <<  fibonacci(4);

    return 0;
}
