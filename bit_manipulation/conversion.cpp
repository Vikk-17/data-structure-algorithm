#include<bits/stdc++.h>
using namespace std;

// C++ functions can't return C-style arrays by value. The closest thing is to return a pointer. Furthermore, an array type in the argument list is simply converted to a pointer.



void decToBin(int num){
    int i = 0; 
    int binary[32];
    while(num>0){
       binary[i] = num % 2;
       num /= 2;
       i++;
    }
    // reverse the number;
    for(int j = i-1; j>=0; j--){
        cout << binary[j];
    }
    cout << endl;
}

int binToDec(int num){
    int temp = num;
    int base = 1;
    int decValue = 0, lastDigit;
    while(temp){
       lastDigit = temp % 10;
       temp /= 10;
       decValue += lastDigit * base;
       base *= 2;
    }
    return decValue;
}

int main(){
    
    int choice, number;
    cout << "Types of conversion do you want? " << endl;
    cout << "1. Decimal to Binary\n2. Binary to Decimal" << endl;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter a number: ";
            cin >> number;
            decToBin(number);
            break;
        case 2:
            cout << "Enter the binary number >>> ";
            cin >> number;
            cout << binToDec(number) << endl;
            break;
        default:
            cout << "Didn't you enter valid choice!" << endl;
            break;
    }
    return 0;
}
