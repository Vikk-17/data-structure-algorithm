#include<bits/stdc++.h>
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

int main(){
    int number;
    cout << "Enter a number >>> ";
    cin >> number;
    cout << convertToBinary(number) << endl;
    decToBinary(number);
    cout << sizeof(int) * 8 << endl;
    return 0;
}
