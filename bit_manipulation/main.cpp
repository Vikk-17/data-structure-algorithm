#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

/**
string reverse(string anystr){
    string result = "";
    for(int i = strlen(anystr); i<=0; i++){
        result += i;
    }
    return result;
}

*/
string convertToBinary(int num){
    string result = ""; // empty string
    while(num!=1){
        if(num%2==1) result += "1";
        else result += "0";
        num /= 2;
    }
    result += "1";
    reverse(result.begin(), result.end());
    return result;
}

void decToBinary(int num){
    int binary[sizeof(int)*8];
    
    int i = 0;
    while(num > 0){
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i-1; j>= 0; j--){
        cout << binary[j];
    }
    cout << endl;
}

/**
int binToDec(string bin){
    int p2 = 1, num = 0;
    int len = bin.length();
    for(int i = len - 1; i<=0; i++){
        if(bin[i] == 1) p2 = num + p2;
        p2 = p2 * 2;
    }
    return num;
}
*/
int binToDec(int num){
    int base = 1; // 2^0
    int temp = num;
    int lastDigit, decValue = 0;
    while(temp){
        lastDigit = temp % 10;
        temp = temp / 10;
        decValue += lastDigit * base;
        base *= 2;
    }
    return decValue;
}

int main(){
    int number;
    cout << "Enter a decimal number >>> ";
    cin >> number;
    cout << convertToBinary(number) << endl;
    cout << "Enter a binary number >>> ";
    cin >> number;
    cout << binToDec(number) << endl;
    return 0;
}
