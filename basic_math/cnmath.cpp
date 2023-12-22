#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
	int dup = n, sum = 0;
    int counter = (int) (log10(n) + 1);
    while(dup!=0){
        int ld = dup % 10;
        sum = sum + pow(ld, counter);
        dup /= 10;
    }
    if(sum==n) return true;
    return false;
}

bool palindrome(int n)
{
    // Write your code here
    int rev = 0;
    int dup = n;
    while(dup>0){
        int ld = dup%10;
        dup /= 10;
        rev = (rev*10) + ld;
    }
    if(n==rev) return true;
    return false;
}

int countDigits(int n){
    int counter = 0;
    int dup = n;
    while(dup>0){
        int ld = dup%10;
        if(ld!=0){
            if(n%ld==0) counter ++;
        }
        dup /= 10;
    }
    return counter;
}

// Need optimal approach
int sumOfAllDivisors(int n){
	// Write your code here.
	int sum=0;
	for(int i=1; i<=n;i++){
		for(int j=1; j<=i; j++){
			if(i%j==0) sum += j;
		}
	}
	return sum;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a; cin >> a;
    cout << palindrome(a) << endl;
    return 0;
}