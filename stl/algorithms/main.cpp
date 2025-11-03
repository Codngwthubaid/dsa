#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr = {12, 54, 345, 21, 33, 5, 3};
    // int maxi = *max_element(arr.begin(), arr.end());
    // int mini = *min_element(arr.begin(), arr.end());
    // cout << "maxi" << maxi;
    // cout << "mini" << mini;

    // sorting in ascending order
    // sort(arr.begin(), arr.end());

    // sort a specific portion of the vector
    // sort(arr.begin() + 2, arr.end());

    // sorting in descending order
    // sort(arr.begin(), arr.end(), greater<int>());

    // for (auto it : arr)
    //     cout << it << endl;

    // cout << "builtin_popcount" << endl;

    // int x = 13; // Binary: 1101
    // cout << __builtin_popcount(x);

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
