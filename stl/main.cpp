/*
STL:
    1. Containers
    2. Algorithm
    3. Functions
    4. Iterators
*/


/* Pair */

#include<iostream>
using namespace std;


#include<utility>
void explainPair(){
    
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> k = {1, {3, 4}};
    cout << k.first << " " << k.second.second << " " << k.second.first;
    
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;

}



/* Vector */
#include<vector>
void explainVector(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // container of 5 instances of 100 with index
    // {100, 100, 100, 100, 100}
    vector<int> k(5, 100);

    // 5 instances of garbege value
    // or 5 instances of 0 {0, 0, 0, 0, 0}
    vector<int> l(5);

    // container of 5 instances of 20 with index
    vector<int> v1(5, 20);

    // copy the container of v1 into v2
    vector<int> v2(v1);



    // Accessing the vector element
    // Iterators
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    //vector<int>::iterator it = v.rend();
    //vector<int>::iterator it = v.rbegin();


    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; 


    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }


    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }


    for(auto it : v) {
        cout << it << " ";
    }


    // Erase element

    // {10, 20, 12, 23}
    v.erase(v.begin()+1);
    // --> {10, 12, 23}

    // v.erase(start, end) --->>> [start, end)
    // {10, 20, 12, 23, 35}
    v.erase(v.begin()+2, v.begin()+4);
    // --> {10, 20, 35}

    // Insert function
    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); //{300, 100,100}

    // {300, 10, 10, 100, 100}
    v.insert(v.begin()+1, 2, 10);


    // copy
    vector<int> copy(2, 50); // {50, 50}
    // {50, 50, 300, 10, 10, 100, 100}
    v.insert(v.begin(), copy.begin(), copy.end());

    
    // {10, 20}
    cout << v.size(); //2

    // {10, 20}
    v.pop_back(); // {10}


    // v1 --> {10, 20}
    // v2 --> {30, 40}
    v1.swap(v2);
    // v1 --> {30, 40}, v2 --> {10, 20}


    v.clear(); // erase the entire vector

    cout << v.empty();

}



#include<list>
void explainList() {
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2, 4}

    // Rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}



#include<deque>
void explainDeque() {
    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    dq.back();
    dq.front();

    // rest funtions same as vector
    // begin, end, rebegin, rend, clear, insert, size, swap

}


