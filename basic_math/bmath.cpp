#include<bits/stdc++.h>
using namespace std;

int cntdigit1(int n){
    int counter = (int) (log10(n)+1);
    return counter;
}

int cntdigit2(int n){
    int cnt = 0;
    while(n > 0){
        int lastDigit = n % 10;
        n /= 10;
        cnt++;
    }
    return cnt;
}

// to reverse a number both negative and positive
int reverse(int x) {
    int rev = 0;
    while(x){
        int lastDigit = x % 10;

        // to overcome the underflow and overflow in the next line
        if((rev > INT_MAX / 10) || (rev < INT_MIN / 10)) return 0;
        // without the above line will get the overflow/underflow error
        rev = (10 * rev) + lastDigit;
        x /= 10;
    }
    return rev;
}

int revNum(int n){
    int rev = 0;
    while(n>0){
        int lastDigit = n % 10;
        n /= 10;
        rev = (rev*10) + lastDigit;
    }
    return rev;
}

void palindrome(int n){
    int rev = 0;
    int duplicate = n;
    while(n>0){
        int ld = n %10;
        n /=10;
        rev = (rev*10)+ld;
    }
    //return rev;
    if(rev == duplicate) cout << "A Palindrome Number" << endl;
    else cout << "Not a Palindrome Number" << endl;
}

void armstrong(int n){
    int dup, sum=0;
    while(n>0){
        int ld = n%10;
        sum = sum + pow(ld,3);
        n /= 10;
    }
    if(sum == dup) cout << "Armstrong Number" << endl;
    else cout << "Not an Armstrong Number" << endl;
}

void printDivisors(int n){
    for(int i = 1; i<=n; i++){
        if(n%i==0) cout << i << " ";
    }
}

void printDiv1(int n){
    vector<int> ls;
    // 6*6 <= 36
    // 7*7 <= 36 false
    // O(sqrt(n))
    for(int i=1; i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    // O(no of factors * log (no of factors)): n is the number of factors
    sort(ls.begin(), ls.end());
    // O(number of factors)
    for(auto it: ls) cout << it << " ";
    cout << endl;
}

void prime(int n){
    int count =0;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }
    }
    if(count == 2) cout << "Prime Number" << endl;
    else cout << "Not a Prime Number" << endl;
}

void gcd(int n1, int n2){
    // O(min(n1, n2))
    for(int i = min(n1,n2); i>=1; i--){
        if(n1%i==0 && n2%i==0){cout << i << endl; break;}
    }
}

int gcd1(int a, int b) {
    while(a > 0 && b > 0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a == 0) return b;
    else return a;
}

int main(){
    gcd(20,40);
    cout << gcd1(11,52) << endl;
    return 0;
}
