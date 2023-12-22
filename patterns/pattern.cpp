#include <iostream>
using namespace std;

/* Pattern 01
 ****
 ****
 ****
 ****
 */
void print1(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cout << "* ";
	cout << endl;
	}
}

/* Pattern 02
 *
 **
 ***
 ****
 *****
 */
void print2(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) cout << "* ";
		cout << endl;
	}
}

/* Pattern 3
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/
void print3(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) cout << j << " ";
		cout << endl;
	}
}

/* Pattern 4
    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
*/
void print4(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++) cout << i << " ";
		cout << endl;
	}
}

/* Pattern 5
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
void print5(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++) cout << "* ";
		cout << endl;
	}
}

/* Pattern 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/
void print6(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i+1; j++) cout << j << " ";
		cout << endl;
	}
}

/* Pattern 7
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
*/
void print7(int n){
	for(int i=1; i<=n;i++){
		// Space
		for(int j=1;j<=n-i-1;j++) cout << " ";
		// Star
		for(int j=1; j<=2*i-1; j++) cout << "*";
		// Space
		for(int j=1;j<=n-i-1;j++) cout << " ";
		cout << endl;
	}
}

/* Pattern 8
    * * * * * * * * * 
      * * * * * * *
        * * * * *
          * * *
            *
*/
void print8(int n){
	for(int i=1; i<=n; i++){
		// Space
		for(int j=1; j<i;j++) cout << " ";
		// Star
		for(int j=1; j<=2*n-(2*i-1); j++) cout << "*";
		// Space
		for(int j=1; j<i;j++) cout << " ";
		cout << endl;
	}

}

/* Pattern 9
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    * * * * * * * * * 
      * * * * * * *
        * * * * *
          * * *
            *
*/
void print9(int n){
	print7(n); print8(n);
}

/* Pattern 10
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    * 
*/
void print10(int n){
	for(int i=1; i<=2*n-1; i++){
		int stars = i;
		if(i>n) stars=2*n-i;
		for(int j=1; j<=stars; j++) cout << "* ";
		cout << endl;
	}
}

int main()
{
    cout << endl; int t; cin >> t;
    for (int i = 0; i < t; i++){
        int n;cin >> n;
        print10(n);
    }
    return 0;
}