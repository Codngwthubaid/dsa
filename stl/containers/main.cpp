#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    // pair
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> np = {1, {2, 3}};
    cout << np.first << " " << np.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << arr[0].first;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> V1(5, 100);
    vector<int> V2(V1);
    V2.push_back(90);

    vector<int>::iterator it = V2.begin();
    it = it + 5;

    // printing vector - method 1
    // for (vector<int>::iterator it = V2.begin(); it != V2.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }

    // printing vector - method 2
    // for (auto it = V2.begin(); it != V2.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }

    // printing vector - method 3
    // for (auto it : V2)
    //     cout << it << endl;

    // for deleting single element
    V2.erase(V2.begin() + 1);

    // for deleting multiple element : including this - V2.begin() + 1 but not this : V2.begin() + 5
    V2.erase(V2.begin() + 1, V2.begin() + 5);

    // for insertion
    vector<int> vi(2, 100);
    vi.insert(vi.begin(), 5000);

    vector<int> cv(2, 50);
    vi.insert(vi.begin(), cv.begin(), cv.end());
    // 50,50,5000,100,100
    vi.size();   // for checking size
    cv.swap(vi); // for swapping the elements for the vector
    cv.clear();  // for erasing the entire elements of the vector
    cv.empty();  // for checking the vector is empty or not

    for (auto it : vi)
        cout << it << endl;
}

void explainList()
{
    list<int> ls;
    ls.push_back(10);
    ls.emplace_back(10);

    ls.emplace_front(90);
    ls.push_front(90);

    for (auto it : ls)
        cout << it;
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(70);
    dq.emplace_front(90);
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top();
    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    q.back() += 6;
    cout << q.back();
}

void explainPQ()
{
    // max heap - highest number always come on the top
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);

    // min heap - smallest number always come on the top
    priority_queue<int, vector<int>, greater<int>> spq;
    spq.push(1);
    spq.emplace(2);
    spq.push(3);

    cout << spq.top();
}

void explainSet()
{
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);

    // auto it1 = s.find(1);
    // auto it2 = s.find(3);
    // s.erase(it1, it2);

    // for (auto it : s)
    //     cout << it;

    auto it = s.lower_bound(4);
    cout << *(it);
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(2);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // erase all the elements "1"

    //
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2);
    ms.erase(it1, it2);

    for (auto it : ms)
        cout << it;

    cout << ms.size();
}

void explainUnOrderSet()
{
    unordered_set<int> uns;
    uns.insert(1);
    uns.emplace(1);
    uns.insert(4);

    for (auto it : uns)
        cout << it;
}

void explainMap()
{
    // methods of init
    map<int, int> mpp;
    // map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp1;

    // methods of key value declaration
    mpp[1] = 2;
    mpp1[{2, 3}] = 10;
    mpp.insert({4, 6});

    // for (auto it : mpp)
    //     cout << it.first << " " << it.second;

    auto it = mpp.find(5);
    cout << it->second;
}

int main()
{
    cout << "Starting STL ..." << endl;
    explainMap();

    return 0;
}
