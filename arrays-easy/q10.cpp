#include <bits/stdc++.h>
using namespace std;

// void bruteforce_approach(int arr1[], int arr2[], int n1, int n2)
// {
//     int record_Arr[n2] = {0};
//     vector<int> result_Arr;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (arr1[i] == arr2[j] && record_Arr[j] == 0)
//             {
//                 result_Arr.push_back(arr1[i]);
//                 record_Arr[j] = 1;
//                 break;
//             }
//             if (arr1[i] < arr2[j])
//                 break;
//         }
//     }
//     for (int ans : result_Arr)
//     {
//         cout << ans << " ";
//     }
// }

void optimum_approach(int arr1[], int arr2[], int n1, int n2)
{
    int p1 = 0;
    int p2 = 0;

    vector<int> result;
    while (p1 < n1 && p2 < n2)
    {
        if (arr1[p1] < arr2[p2])
            p1++;
        else if (arr1[p1] > arr2[p2])
            p2++;
        else
        {
            result.push_back(arr1[p1]);
            p1++;
            p2++;
        }
    }

    for (int ans : result)
        cout << ans << " ";
}

int main()
{
    cout << "Ques : Find the intersection array of 2 sorted arrays ?" << endl;

    int n1, n2;
    cin >> n1;
    cin >> n2;
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    // bruteforce_approach(arr1, arr2, n1, n2);
    optimum_approach(arr1, arr2, n1, n2);

    return 0;
}