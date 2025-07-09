/*
 * Problem statement => https://www.naukri.com/code360/problems/alternate-numbers_6783445?count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
 *
 *
 * Problem statement
There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.

Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.

Note:

Start the array with a positive number. 
For example

Input:
A = [1, 2, -4, -5], N = 4
Output:
1 -4  2 -5
Explanation: 
Positive elements = 1, 2
Negative elements = -4, -5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
2 <= N <= 10^5 
-10^9 <= A[i] <= 10^9, A[i] != 0
N%2==0

Time Limit: 1 sec
Sample Input 1:
6 
1 2 -3 -1 -2 3
Sample Output 1:
1 -3 2 -1 3 -2 
Explanation Of Sample Input 1:
Testcase 1:
Input:
A = [1, 2, -3, -1, -2, 3], N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 
Positive elements = 1, 2, 3
Negative elements = -3, -1, -2
To maintain relative ordering, 1 should come before 2, and 2 must come before 3.
Also, -3 should come before -1, and -1 must come before -2.
Sample Input 2:
4
-2 -3 4 5
Sample Output 2:
4 -2 5 -3
 *
 */


#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A, int n){

    // Define 2 vectors, one for storing positive 
    // and other for negative elements of the array.
    vector<int> pos;
    vector<int> neg;

    // Segregate the array into positives and negatives.
    for(int i=0;i<n;i++){

        if(A[i]>0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }

    // If positives are lesser than the negatives.
    if(pos.size() < neg.size()){

        // First, fill array alternatively till the point 
        // where positives and negatives ar equal in number.
        for(int i=0;i<pos.size();i++){

            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }

        // Fill the remaining negatives at the end of the array.
        int index = pos.size()*2;
        for(int i = pos.size();i<neg.size();i++){

            A[index] = neg[i];
            index++;
        }
    }

    // If negatives are lesser than the positives.
    else{

        // First, fill array alternatively till the point 
        // where positives and negatives ar equal in number.
        for(int i=0;i<neg.size();i++){

            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }

        // Fill the remaining positives at the end of the array.
        int index = neg.size()*2;
        for(int i = neg.size();i<pos.size();i++){

            A[index] = pos[i];
            index++;
        }
    }
    return A;

}

int main() {

    // Array Initialisation.
    int n = 6;
    vector<int> A {1,2,-4,-5,3,4};

    vector<int> ans = RearrangebySign(A,n);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}


/* Have to check in depth
 *
 *Time Complexity: O(2*N) { The worst case complexity is O(2*N) which is a combination of O(N) of traversing the array to segregate into neg and pos array and O(N) for adding the elements alternatively to the main array}.

Explanation: The second O(N) is a combination of O(min(pos, neg)) + O(leftover elements). There can be two cases: when only positive or only negative elements are present, O(min(pos, neg)) + O(leftover) = O(0) + O(N), and when equal no. of positive and negative elements are present, O(min(pos, neg)) + O(leftover) = O(N/2) + O(0). So, from these two cases, we can say the worst-case time complexity is O(N) for the second part, and by adding the first part we get the total complexity of O(2*N).

Space Complexity:  O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative element arrays, where N = size of the array A}.
 */
