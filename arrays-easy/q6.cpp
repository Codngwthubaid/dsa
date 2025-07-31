#include <bits/stdc++.h>
using namespace std;

// GOOD APPORACH
// TC : O(d) + O(n-d) + O(d) = O(n+d)
// SC : O(d)
// void left_rotate(int arr[], int n, int d)
// {
//     d = d % n;
//     int temp[d];
//     for (int i = 0; i < d; i++)
//         temp[i] = arr[i];
//     for (int i = d; i < n; i++)
//         arr[i - d] = arr[i];
//     for (int i = n - d; i < n; i++)
//         arr[i] = temp[i - (n - d)];
// }

void by_reverse(int arr[], int n, int d)
{

    d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

int main()
{
    cout << "Left rotate the array by D places ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int d;
    cin >> d;

    // left_rotate(arr, n, d);
    by_reverse(arr, n, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}