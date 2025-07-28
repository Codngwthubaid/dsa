#include <bits/stdc++.h>
using namespace std;

int SL(int arr[], int n)
{
    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
            second_largest = arr[i];
    }

    return second_largest;
}

int SS(int arr[], int n)
{
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main()
{
    cout << "Ques : Second largest and second smallest elemenet in an array without sorting ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    const second_largest = SL(arr, n);
    const second_smallest = SS(arr, n);
    cout << "Second largest elemenet in an array is :" << second_largest << endl;
    cout << "Second Smallest elemenet in an array is :" << second_smallest << endl;

    return 0;
}