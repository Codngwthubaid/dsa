#include <bits/stdc++.h>
using namespace std;

// void bruteforce_approach(int arr[], int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         bool isExist = false;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] == i)
//             {
//                 isExist = true;
//                 break;
//             }
//         }
//         if (!isExist)
//             cout << i;
//     }
// }

// void better_approach(int arr[], int n)
// {
//     int hash[n + 1] = {0};
//     for (int i = 0; i < n - 1; i++)
//     {
//         hash[arr[i]] = 1;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (hash[i] == 0)
//             cout << i;
//     }
// }

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int arr[n - 1];

    // for bruteforce and better approach
    // for (int i = 0; i < n - 1; i++)
    //     cin >> arr[i];

    //  Optimum Approach
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int result = n * (n + 1) / 2;
    int number = result - sum;
    cout << "Missing number : " << number;

    // bruteforce_approach(arr, n);
    // better_approach(arr, n);

    return 0;
}