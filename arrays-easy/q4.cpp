#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Ques : Remove the duplicate elements from the array ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // BRUTEFORCE METHOD
    // TC : O(N+N log N)
    // SC : O(N)

    // set<int> st;
    // for (int i = 0; i < n; i++)
    //     st.insert(arr[i]);

    // int index = 0;
    // for (auto it : st)
    // {
    //     arr[index] = it;
    //     cout << arr[index] << " ";
    //     index++;
    // }

    // OPTIMIZED METHOD
    // TC : O(N)
    // SC : O(1)

    int p1 = 0;
    for (int p2 = 1; p2 < n; p2++)
    {
        if (arr[p2] != arr[p1])
        {
            arr[p1 + 1] = arr[p2];
            p1++;
        }
    }

    for (int i = 0; i <= p1; i++)
        cout << arr[i] << endl;

    return 0;
}