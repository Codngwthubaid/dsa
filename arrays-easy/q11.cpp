#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
    {
        bool isExist = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                isExist = true;
                break;
            }
        }
        if (isExist == false)
            return i;
    }
}