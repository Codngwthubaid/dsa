#include <bits/stdc++.h>
using namespace std;

void print(string name)
{
    cout << "Ubaid " << name;
}

int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int maxx(int num1, int num2)
{
    if (num1 >= num2)
        return num1;
    else
        return num2;
}

void doSomething(string &name)
{
    name[0] = 'Z';
    cout << name << endl;
}

int arrayDo(int arr[], int n)
{
    arr[0] -= 45;
    cout << arr[0] << endl;
}

int main()
{
    string name = "bye";
    int num1, num2;
    // cin >> num1 >> num2;
    // cin >> name;
    // print(name);
    // int sumFromSum = sum(num1, num2);
    // cout << sumFromSum;
    // int maximun = min(num1,num2);
    // cout << maximun;

    // doSomething(name);
    // cout << name << endl;

    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << endl;
    }

    arrayDo(arr, n);
    cout << arr[0] << endl;
    return 0;
}