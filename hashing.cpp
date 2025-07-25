#include <bits/stdc++.h>
using namespace std;

int main()
{
    // HASHING FOR NUMBERS

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int hash[10] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]] += 1;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int nums;
    //     cin >> nums;

    //     int result = hash[nums];
    //     cout << result << endl;
    // }

    // HASHING FOR CHARS
    // string intaking
    string s;
    cin >> s;

    // pre-computing
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'A'] += 1;
    }

    // no and element intaking
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // fetching
        cout << hash[c - 'A'] << " ";
    }

    return 0;
}
