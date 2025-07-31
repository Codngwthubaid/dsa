#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Ques : Largest element in the array ?" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest Element in the array is : " << largest << endl;
    return 0;
}


