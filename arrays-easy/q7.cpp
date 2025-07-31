#include <bits/stdc++.h>
using namespace std;

// void good_approach(int arr[], int n)
// {
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }

//     int elements_in_temp = temp.size();

//     for (int i = 0; i < elements_in_temp; i++)
//         arr[i] = temp[i];

//     for (int i = elements_in_temp; i < n; i++)
//         arr[i] = 0;
// }

void optimum_approach(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    cout << "Ques : Move all the zeros to the end of the array ?" << endl;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // good_approach(arr, n);
    optimum_approach(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}