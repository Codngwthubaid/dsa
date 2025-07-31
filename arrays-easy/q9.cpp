#include <bits/stdc++.h>
using namespace std;

// int bruteforce_approach(int arr1[], int arr2[], int n1, int n2)
// {
//    set<int> s;
//     for (int i = 0; i < n1; i++)
//         s.insert(arr1[i]);
//     for (int i = 0; i < n2; i++)
//         s.insert(arr2[i]);
//     vector<int> union_vector;
//     for (auto it : s)
//     {
//         union_vector.push_back(it);
//     }
//     int size_of_union_vector = union_vector.size();
//     for (int i = 0; i < size_of_union_vector; i++)
//         return union_vector[i];
// }

vector<int> optimum_approach(int arr1[], int arr2[], int n1, int n2)
{
    int p1 = 0;
    int p2 = 0;

    vector<int> union_Arr;

    while (p1 < n1 && p2 < n2)
    {
        if (arr1[p1] <= arr2[p2])
        {
            if (union_Arr.size() == 0 || union_Arr.back() != arr1[p1])
                union_Arr.push_back(arr1[p1]);
            p1++;
        }
        if (arr2[p2] <= arr1[p1])
        {
            if (union_Arr.size() == 0 || union_Arr.back() != arr2[p2])
                union_Arr.push_back(arr2[p2]);
            p2++;
        }
    }

    while (p1 < n1)
    {
        if (union_Arr.size() == 0 || union_Arr.back() != arr1[p1])
            union_Arr.push_back(arr1[p1]);
        p1++;
    }

    while (p2 < n2)
    {
        if (union_Arr.size() == 0 || union_Arr.back() != arr2[p2])
            union_Arr.push_back(arr2[p2]);
        p2++;
    }

    return union_Arr;
}

int main()
{
    cout << "Ques : Find union of 2 sorted arrays ?" << endl;

    int n1, n2;
    cout << "Enter nof of elements fr arr1 : ";
    cin >> n1;
    cout << "Enter nof of elements fr arr2 : ";
    cin >> n2;

    int arr1[n1];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    // bruteforce_approach(arr1, arr2, n1, n2);

    vector<int> result = optimum_approach(arr1, arr2, n1, n2);

    cout << "Union : ";
    for (int x : result)
    {
        cout << x << " ";
    }

    return 0;
}