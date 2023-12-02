#include<iostream>
#include<utility>
using namespace std;



void explainPair(){
    // define a pair 
    pair<int, char> p1;
    //first part of the pair
    p1.first = 100;
    //second part of the pair
    p1.second = 's';
    cout << p1.first << " " << p1.second << endl;

    pair<int, int> p2 = {1, 100};
    cout << p2.first << " " << p2.second << endl;
}


int main(){
    explainPair();
    return 0;
}