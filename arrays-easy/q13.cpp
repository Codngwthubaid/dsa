#include <bits/stdc++.h>
using namespace std;

// void bruteForce_AppearsOnce(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int element = arr[i];
//         int counter = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == element){
//                 counter++;
//             }
//         }
//         if( counter == 1) cout << element << endl;
//     }
// }

// void better_AppearsOnce(int arr[], int n)
// {
// By Hashing
// int maxi = arr[0];
// for (int i = 0; i < n; i++)
//     maxi = max(maxi, arr[i]);
// int hash[maxi + 1] = {0};
// for (int i = 0; i < n; i++)
//     hash[arr[i]]++;
// for (int i = 0; i < n; i++)
//     if (hash[arr[i]] == 1)
//         cout << arr[i] << " ";
// By Mapping
// map<int, int> mpp;
// for (int i = 0; i < n; i++)
//     mpp[arr[i]]++;
// for (auto it : mpp)
//     if (it.second == 1)
//         cout << it.first << " ";
// }

void optimum_AppearsOnce(int arr[], int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
        XOR = XOR ^ arr[i];
    cout << XOR << endl;
}

int main()
{
    cout << "Find the no which only appears once ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // bruteForce_AppearsOnce(arr, n);
    // better_AppearsOnce(arr, n);
    optimum_AppearsOnce(arr, n);
    return 0;
}