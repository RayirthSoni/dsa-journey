#include <bits/stdc++.h>
#include <unordered_set>
#include<map>

using namespace std;

// pairs
void explainPairs()
{
    pair<int, int> p1 = {10, 20};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {100, {200, 300}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2},
                            {3, 4},
                            {5, 6},
                            {7, 8}};
    cout << arr[1].first;
}

// vectors
void explainVector()
{

    // WAYS FOR USER INPUT VECTOR
    // for (auto& it : v)
    // {
    //     cin >> it;
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin >> v[i];
    // }
    // for (auto it = v.begin(); it != v.end(); it ++)
    // {
    //     cin >> *it;
    // }


    vector<int> v10;
    v10.push_back(1);    // will push back 1 into vector
    v10.emplace_back(2); // will emplace back 2 into vector. same as push back but generically faster

    vector<pair<int, int>> v2;
    v2.push_back({10, 20});
    v2.emplace_back(30, 40);

    vector<int> v3(5, 100); // this will define a vector of size 5 and each element having 100

    vector<int> v4(5); // this will define a vector of size 5 and elements will have garbage value or 0 depending on complier

    vector<int> v5(5, 20);
    vector<int> v6(v5); // this will create vector v6 which is copy of v5. it is different entity but a copy.

    vector<int> v = {10, 20, 30, 40, 50, 60};

    // this is how we initialize an iterator. for datatype we copy that of element for which iterator being created
    // vector<int>::iterator is like how we define datatype for iterator.iterator points to address where we store data
    vector<int>::iterator it = v.begin();

    cout << "Value when iterator initialised = " << *(it) << endl;
    it++;
    cout << "Value after incrementing the iterator = " << *(it) << endl;

    vector<int>::iterator it1 = v.end(); // this will assign pointer to 1 element after the vector
    // 10 20 30 40 50 60 _
    //                   ^ --> This is where pointer will be

    // rbegin and rend not used much.
    auto it2 = v.rbegin();
    // rbegin --> to imagine think of it as basically reversing array and then at begin element pointer
    // 60 50 40 30 20 10
    // ^
    // 10 20 30 40 50 60
    //                 ^ --> this is where pointer will be. also  if ++ then it goes to 50

    auto it3 = v.rend();
    /* rend --> to imagine think of it as basically reversing array and then point at end
    60 50 40 30 20 10
                      ^
    10 20 30 40 50 60
   ^
    */
    cout << v.back() << endl;               // this will give last element of vector
    cout << v[1] << " " << v.at(1) << endl; // can access elements both ways

    // to print a vector
    cout << "iterating over vector" << endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // can use auto for automatically assigning datatype rather than typing such big vector<int>::iterator
    cout << "iterating over vector via auto" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    /* for each loop
       here, it --> is assigned datatype via auto which assigns datatype automatically.
       here that datatype is int. basically here we iterate over elements in vector.
    */
    cout << "iterative over vector via for each loop" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // remove function
    vector<int> v1 = {10, 20, 30, 40, 50};

    v1.erase(v1.begin()); // {20,30,40,50}
    cout << "iterating over vector after erase for 1st element\n";
    for (auto it : v1)
        cout << it << " ";
    cout << endl;

    v1.erase(v1.begin(), v1.begin() + 2); // removes element from [start,end)
    cout << "iterating over vector after removing 2 elements\n";
    for (auto it : v1)
        cout << it << " ";
    cout << endl;

    // insert function
    vector<int> y(2, 100);          // {100,100}
    y.insert(y.begin(), 400);       // {400,100,100}
    y.insert(y.begin() + 1, 2, 10); // {400, 10, 10, 100, 100}
    vector<int> copy(2, 50);
    y.insert(y.begin(), copy.begin(), copy.end()); // {50,50,400,10,10,100,100}

    vector<int>
        x = {2, 4, 6, 8, 10};

    // {2,4,6,8,10}
    x.pop_back(); // {2,4,6,8}

    vector<int> a = {10, 20};
    vector<int> b = {30, 40};
    // a = {10,20},     b = {30,40}
    a.swap(b);
    // a = {30,40},     b = {10,20}

    cout << "\nchecking size of vector = " << x.size() << endl; // how many elements in vector

    // to check if vector is empty or not
    // 1 --> is empty,  0 --> not empty.
    cout << "is vector empty ? " << x.empty() << endl;
    x.clear(); // erases all elements in a vector
    cout << "is vector empty ? " << x.empty() << endl;
}

void explainList()        // doubly linked list
{
    list<int> l1;

    l1.push_back(30);    // {30}
    l1.emplace_back(40); // {30,40}

    l1.push_front(20);    // {20,30,40}
    l1.emplace_front(10); // {10,20,30,40}

    // NEED TO USE ADVANCE FUNCTION WHILE USING ERASE FUNCTION
    auto it = l1.begin();
    advance(it,4);
    l1.erase(l1.begin(),it);

    /* rest functions same as vector
    begin,end,rbegin,rend,insert,clear,size,swap
    */
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(3);    // {3,1,2}
    dq.emplace_front(4); // {4,3,1,2}

    dq.pop_back();  // {4,3,1}
    dq.pop_front(); // {3,1}

    dq.back();
    dq.front();

    /*  rest functions same as vector
        being,end,rbegin,rend,clear,swap,insert,size
    */
}

void explainStack()     // LIFO
{
    stack<int> st;
    st.push(1);                 // {1}
    st.push(2);                 // {1,2}
    st.push(3);                 // {1,2,3}
    st.push(4);                 // {1,2,3,4}
    st.push(5);                 // {1,2,3,4,5}
    cout << st.top() << endl;   // will print 5. " can't access like st[2] etc".
    st.pop();                   // will delete 5 from stack.stack now looks like {1,2,3,4}
    cout << st.top() << endl;   // will print 4
    cout << st.size() << endl;  // will give size of stack here 4
    cout << st.empty() << endl; // will give if stack empty or not

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()     // FIFO
{
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}
    q.back() += 10;
    cout << q.front() << endl;
    q.pop(); // {2,13}
    cout << q.front() << endl;

    // size swap empty same as stack
}

void explainPriorityQueue()
{
    // Maximum Heap
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    pq.pop(); // 10 will be popped. {8,5,2}

    cout << pq.top() << endl; // 10

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);     // {5}
    pq2.push(2);     // {2,5}
    pq2.push(8);     // {2,5,8}
    pq2.emplace(10); // {2,5,8,10}
    cout << pq2.top() << endl;
}

void explainSet() // unique and sorted
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}
    st.insert(5);  // {1,2,3,4,5}
    st.insert(s.begin(),10);

    // functionality of insert in vector, can be used also, that only increases efficiency

    // begin, rbegin, rend, end, size, empty and swap are same as rest

    // {1,2,3,4,5}
    auto it2 = st.find(3); // iterator to where 3 is present

    // {1,2,3,4,5}
    auto it3 = st.find(6); // since 6 not present. iterator to end i.e end + 1

    // {1,2,3,4,5}
    st.erase(5); // erases 5 takes log time.
    // {1,2,3,4}

    int cnt = st.count(1); // will give us count of number of times element in set. since this is set count can be 0 or 1.

    auto it = st.find(3);
    st.erase(it); // in erase can pass elemnent or iterator.

    // {1,2,3,4,5}
    auto it4 = st.find(2);
    auto it5 = st.find(4);

    st.erase(it4, it5); // {1,4,5}  [first,last)

    // lowerbound and upperbound works in same way as in vector

    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);
}

void explainMultiset() // sorted only
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    // {1,1,1,2,3}

    int cnt = ms.count(1);

    // this will remove all 1s
    ms.erase(1); // will remove all 1s in multiset, --> {2,3}

    // if want to remove only one 1
    ms.erase(ms.find(1)); // {1,1,2,3}

    // if want to remove in a range
    ms.erase(ms.find(1), ms.find(3));

    // rest functions same as set
}

void explainUnorderedSet() // unique only
{
    unordered_set<int> us;
    /*  lower and upper bound does not work, rest all functions work the same. it does not store in particular order and has
    better complexity than set, in most cases. except some when collision happens
    Generally time complexity is O(1) in worst case(once in blue moon) goes to O(n)
    */
}

void explainMap() // map basically has unique sorted keys and values can be anything. like roll number and names
{
    map<int, int> mp1;
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp3;


    mp1[1] = 2;
    mp1.insert({3,1});
    mp1.insert({5,4});
    mp1.emplace(2,4);

    // {{1,2},{2,4},{3,1}, {5,4}}

    for(auto it: mp1)
    {
        cout << it.first << " " << it.second << endl;
    }

    for(auto it = mp1.begin();it!=mp1.end();it++)
    {
        cout << "Key = " << it->first << "\tValue = " << it->second << endl;
    }

    cout << mp1[1] << endl;     // 2
    cout << mp1[5] << endl;     // 0

    auto it1 = mp1.find(1);     // in find put key
    // cout << *(it1).second;

    auto it2 = mp1.find(6);

    auto it3 = mp1.lower_bound(2);
    auto it3 = mp1.lower_bound(3);

    // erase swap size empty works same

}

void explainMultimap()
{
    // everything same as map, only it can store multiple keys
    // only map[key] cannot be used here
}

void explainUnorderedmap()      // unique but not sorted
{
    // same as set and unordered set difference
}

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if (p1.second > p2.second)
        return true;
    if (p1.second < p2.second)
        return false;

    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()     // for algorithms (majority needed done here rest do while coding)
{
    vector<int> a = {20,15,25,5,10};

    // will sort from begin to end
    sort(a.begin(),a.end());            // {5,10,15,20,25}

    // if want to sort particular part
    sort(a.begin()+2,a.end());

    // want to sort descending order
    sort(a.begin(),a.end(),greater<int>());

    pair<int,int> arr[] = {{1,2},{2,1},{4,1}};
    auto n = sizeof(arr)/sizeof(arr[0]);
    
    // suppose want to sort according to second element
    // if second element, is same then sort it according to first element but in descending

    sort(arr, arr+n, comp);
    for(auto it : arr)
    {
        cout << it.first << " " << it.second << endl;
    }


    // IF WANT TO SORT ARRAY
    int arr[] = {4,3,1,7,9,7,8,91};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);


    // built in pop count
    int num = 7;                                // binary = 111
    int count = __builtin_popcount(num);        // 3

    long long num = 165786578687;
    int count = __builtin_popcountll(num);      // binary mein jitne 1 hain

    string s = "123";
    sort(s.begin(),s.end());
    // 6 permutation possible how to print all ?
    do
    {
        cout << s << endl;
    }while(next_permutation(s.begin(),s.end()));

    // if string was "231" first sort it then permutation


    // max element and min element
    int arr1[] = {1,2,3,4,5,6,7,8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int maxele = *max_element(arr1,arr1+n1);
    int minele = *min_element(arr1,arr1+n1);


}

int main()
{
    explainMap();
    return 0;
}