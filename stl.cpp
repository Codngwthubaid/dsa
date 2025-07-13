#include <bits/stdc++.h>
using namespace std;

void pairsExplain()
{
    pair<int, int> p1 = {1, 5};
    pair<int, pair<int, int>> p2 = {23, {34, 45}};
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    cout << p1.first << p1.second;
    cout << p2.second.second;
    cout << arr[4].second;
}

void vectorsExplain()
{

    // assigning and adding
    // vector<int> p;
    // p.push_back(10);
    // p.emplace_back(54);

    // p2 copy p1
    // vector<int> p1(3, 54);
    // vector<int> p2(p1);

    // pairs
    // vector<pair<int, int>> vec;
    // vec.push_back({1, 2});
    // vec.emplace_back(3, 4);

    // accessing the elements of vectors
    // vec[1];

    // itearator with vectors
    // vector<int>::iterator it = p.begin();
    // it++;
    // cout << *(it) << endl;

    // accessing multiple elements of vectors by for loop
    // method 1
    // for (vector<int>::iterator it = p.begin(); it != p.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // method 2
    // for (auto it = p.begin(); it != p.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // method 3 - directly accessing the elements
    // for (auto it : p)
    // {
    //     cout << it << " ";
    // }

    // deletion on vector
    // let vector = [10,20,30,40,50] - 0,1,2,3,4
    // p.erase(p.begin() + 1);
    // p.erase(p.begin() + 2, p.end() + 4);
    // output - [10,20,50]

    // inseration in vector
    vector<int> v(2, 100);          // {100,100}
    v.insert(v.begin(), 15);        // {15,100,100}
    v.insert(v.begin() + 2, 3, 45); // {15,100,45,45,45,100}

    vector<int> copy(3, 89);
    v.insert(v.begin(), copy.begin(), copy.end());

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl; // {89,89,89,15,100,45,45,45,100}
    }

    v.size();
    v.pop_back();
    v.swap(copy);
    v.clear();
}

void stackExplain()
{
    stack<int> st;
    st.push(45);
    st.push(5);
    st.emplace(78);

    stack<int> st2;
    st.swap(st2);
    cout << st2.top() << " ";
}

void queueExplain()
{
    queue<int> q;
    q.push(45);
    q.push(4);
    q.emplace(500);

    q.pop();
    cout << q.front() << " ";
}

void pqExplain()
{
    priority_queue<int> pq;
    pq.push(12);
    pq.push(2);
    pq.push(20);
    pq.emplace(200);

    pq.pop();
    // cout << pq.top() << " ";

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.push(43);
    min_pq.emplace(2);

    cout << min_pq.top() << " ";
}

void setExplain()
{
    set<int> s;
    s.insert(78);
    s.emplace(7);
    s.insert(8);
    s.insert(45);
    s.insert(65);

    // auto it = s.find(8);
    // s.erase(it);

    auto it1 = s.find(2);
    auto it2 = s.find(4);
    // s.erase(it1, it2);
    auto lb = s.lower_bound(8);
    auto ub = s.upper_bound(8);
    cout << *(lb) << *(ub);
}

void multi_setExplain()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(ms.find(1), ms.find(3));
    cout << ms.count(1);
}

void mapExplain()
{
    map<int, int> mpp;
    mpp[1] = 56;
    mpp.insert({2, 45});
    mpp.emplace(3, 10);

    // cout << mpp[1];
    auto it = mpp.find(3);
    cout << it->second;

    auto lb = mpp.lower_bound(2);
    auto up = mpp.upper_bound(1);

    if (lb != mpp.end())
    {
        cout << &(*it) << " ";
        cout << &(lb->second) << endl;
    }

    // else if (up != mpp.end())
    // {
    //     cout << up->second << endl;
    // }

    // for (auto it : mpp)
    // {
    //     cout << it.first << " " << it.second << endl;;
    // }
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first > p2.first)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "STL Basis -" << endl;
    // pairsExplain();
    // vectorsExplain();
    // stackExplain();
    // queueExplain();
    // pqExplain();
    // setExplain();
    // multi_setExplain();
    // mapExplain();

    // pair<int, int> arr[] = {{1, 2}, {2, 3}, {4, 1}};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;

    // sort(arr, arr + n, comp);

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    // }

    int num = 7;
    int cnt = __builtin_popcount(num);
    // cout << cnt << endl;


    string number = "005331";
    cout << "Before : " << number << endl;
    sort(number.begin(), number.end());
    cout << "After : " << number << endl;

    do
    {
        cout << number << endl;
    } while (next_permutation(number.begin(), number.end()));

    return 0;
}

// STL : algorithms, functions, containers, iterators
// containers : vectors, map, multimap, ordermap, queue, deque, stack, list, set, unorderset, multiset
// iterators