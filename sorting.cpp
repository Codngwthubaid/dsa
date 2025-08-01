#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "runs\n";
    }
}

void inserttion_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
            cout << "runs\n";
        }
    }
}

void merging(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merging(arr, low, mid, high);
}

void recursive_bubble_sorting(int arr[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }

    recursive_bubble_sorting(arr, n - 1);
}

void recursive_insertion_sorting(int arr[], int i, int n)
{
    if (i == n)
        return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    recursive_insertion_sorting(arr, i + 1, n);
}

int partition(int arr[], int low, int high)
{
    int PI = arr[low];
    int left = low;
    int right = high;

    while (left < right)
    {
        while (arr[left] <= PI && left <= high - 1)
            left++;
        while (arr[right] > PI && right >= low + 1)
            right--;
        if (left < right)
            swap(arr[left], arr[right]);
    }
    swap(arr[low], arr[right]);
    return right;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
    }
}

int main()
{

    int n, index = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quick_sort(arr, index, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}