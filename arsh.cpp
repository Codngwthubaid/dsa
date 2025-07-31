#include <bits/stdc++.h>
using namespace std;

void reverse_Array(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverse_Array(arr, start + 1, end - 1);
    }
}

void print(int arr[], int n)
{
    cout << " The reversed array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cout << "Tell the size :";
    cin >> n;
    int arr[n];
    cout << "Taking inputs : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse_Array(arr, 0, n - 1);
    print(arr, n);

    return 0;
}

// n/2 = 5/2 = 2

// 1,4
// 2,3
// 3,2

// 5,4,3,2,1

// start = 5
// end = 1

// start = arr[0]
//  end = arr[n - 1]

//  size = n

// n = 5
// 0,1,2,3,4