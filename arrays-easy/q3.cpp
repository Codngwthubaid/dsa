#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Ques : Check if the array is sorted ot not ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            cout << "Sorted..." << endl;
        }
        else
        {
            cout << "Unsorted..." << endl;
        }
    }

    return 0;
}