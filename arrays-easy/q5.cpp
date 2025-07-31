#include <bits/stdc++.h>
using namespace std;


int main()
{
    cout << "Ques : Left rotate the array by one place ?" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int first_element = arr[0];
    for (int j = 1; j < n; j++)
    {
        arr[j - 1] = arr[j];
    }
    arr[n - 1] = first_element;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}