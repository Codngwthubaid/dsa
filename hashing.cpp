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
    // string s;
    // cin >> s;

    // // pre-computing
    // int hash[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     hash[s[i] - 'A'] += 1;
    // }

    // // no and element intaking
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     char c;
    //     cin >> c;

    //     // fetching
    //     cout << hash[c - 'A'] << " ";
    // }

    // USING MAP IN NUMBERS HASHING

    // int n;
    // cin >> n;
    // int arr[n];

    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     mpp[arr[i]]++;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int nums;
    //     cin >> nums;
    //     cout << mpp[nums] << " ";
    // }

    // USING MAP FOR CHAR HASHING

    // string s;
    // cin >> s;

    // map<char, int> mpp;
    // for (char ch : s)
    // {
    //     mpp[ch]++;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     char ch;
    //     cin >> ch;
    //     cout << mpp[ch] << " ";
    // }

    // USING MAP IN NUMBERS HASHING

    // int n;
    // cin >> n;
    // int arr[n];

    // unordered_map<int, int> unompp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     unompp[arr[i]]++;
    // }

    // for (auto it : unompp)
    // {
    //     cout << it.first << "=>" << it.second << " ";s
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int nums;
    //     cin >> nums;
    //     cout << unompp[nums] << " ";
    // }

    // FINDING HIGHEST AND LOWEST FREQ IN THE ARRAY

    // int n;
    // cin >> n;
    // int arr[n];

    // unordered_map<int, int> map;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     map[arr[i]]++;
    // }

    // int maxFreq = 0, minFreq = n;
    // int minElem = 0, maxElem = 0;

    // for (auto it : map)
    // {
    //     int key = it.first;
    //     int value = it.second;

    //     if (value > maxFreq)
    //     {
    //         maxFreq = value;
    //         maxElem = key;
    //     }
    //     if (value < minFreq)
    //     {
    //         minFreq = value;
    //         minElem = key;
    //     }
    // }

    // cout << "Highest Element : " << maxElem << " with highest Freq : " << maxFreq << endl;
    // cout << "Lowest Element : " << minElem << " with lowest Freq : " << minFreq << endl;

    return 0;
}
