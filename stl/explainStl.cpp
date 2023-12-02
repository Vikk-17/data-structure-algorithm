#include <iostream>
using namespace std;

#include <stack>
void explainStack()
{
    // define a stack
    stack<int> s;

    s.push(21); // {21}
    s.push(22); // {22, 21}
    s.push(24); // {24, 22, 21}
    s.push(25); // {25, 24, 22, 21}

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

#include <queue>
void explainQueue()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }

    cout << "The elements of the queue are: " << endl;

    // print the queue
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}

void explainPriorityQueue()
{
    // maximum heap
    priority_queue<int> maxpq;
    for (int i = 10; i <= 20; i++)
    {
        maxpq.push(i);
    }
    // print max-heap
    cout << "The elements of the maximum heap: " << endl;
    while (!maxpq.empty())
    {
        cout << maxpq.top() << " ";
        maxpq.pop();
    }
    cout << endl
         << endl;

    // minimum heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    for (int i = 1; i <= 10; i++)
    {
        minpq.push(i);
    }

    // print minimum heap
    cout << "The elements of minimum heap: " << endl;
    while (!minpq.empty())
    {
        cout << minpq.top() << " ";
        minpq.pop();
    }
    cout << endl;
}

#include <set>
void explainSet()
{
    // Sorted and Unique
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  //{1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}

    /*
    Functionality of insert in vector
    can be used also, that only increased
    efficiency

    begin(), end(), rbegin(), rend(), size(),
    empty() and swap() are as the same as those
    above
    */
    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // gives the address or iteraotrs

    // There is no 6, returns the end address
    // after the last element
    auto it = st.find(6);

    // {1, 4, 5}
    st.erase(5); // {1, 4}, takes logarithmic time

    int cnt = st.count(1);

    auto it = st.find(3); // returns the address
    st.erase(it);         // deletes the item at that address

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    // [fist, last)
    st.erase(it1, it2); // after erase {1, 4, 5}

    // lower_bound() and upper_bound() function works in
    // the same way as the vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}


void explainMultiset(){
    // sorted but not unique
    // Everything is same as set
    // only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // '+' no matching operator found: error
    //ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set

}

#include <unordered_set>
void explainUSet(){
    unordered_set<int> st;
    /*
    unique but not sorted
    lower_bound and upper_bound function does not works, rest
    all the functions are same, it does not stores in any
    particular order it has a better complexity than set in
    most cases, except some when collision happens
    */
}

#include<map>
void explainMap(){
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp.insert({2, 4});

    mpp[2, 3] = 10;

    for(auto it: mpp){
        cout << it.first << " " << it.second << endl; 
    }
    cout << mpp[1];
    cout << mpp[5];

    // auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty, are same as above
}

void explainMultimap(){
    // Everything same as map, only it can store
    // multiple keys and only mpp[key] can't be
    // used here   
}

void explainUnorderedMap(){
    // same as set and unordered_set difference
}

bool comp(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second) {
        return true;
    } else if (p1.second == p2.second){
        if(p1.first > p2.second) return true;
    }
    return false;
}

#include<algorithm>
void explainExtra(){
    sort(a, a+n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in
    // descending

    sort(a, a+n, comp);

    // {4, 1}, {2, 1}, {1, 2};

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
    int maxi = *max_element(a, a+n);
}

int main()
{

    // explainStack();
    // explainPriorityQueue();
    return 0;
}