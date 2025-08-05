#include <bits/stdc++.h>
using namespace std;

void MaximumConsecutiveOnes(int arr[], int n)
{
    int maximum = 0;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            counter++;
            maximum = max(maximum, counter);
        }
        else
        {
            counter = 0;
        }
    }
    cout << maximum << endl;
}

int main()
{
    cout << "Find Maximum Consecutive Ones in the array ?" << endl;

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    MaximumConsecutiveOnes(arr, n);
    return 0;
}