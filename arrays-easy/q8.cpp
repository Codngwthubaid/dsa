#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Ques : Linear Search ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << arr[i] << endl;
            cout << i << endl;
        }
        if (arr[i] != key)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}