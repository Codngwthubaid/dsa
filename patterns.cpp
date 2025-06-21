#include <bits/stdc++.h>
using namespace std;

void pattern1(int num)
{
    cout << "Pattern - 1" << endl;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern2(int num)
{
    cout << "Pattern 2 :" << endl;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int num)
{
    cout << "Pattern 3 :" << endl;

    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int num)
{
    cout << "Pattern 4 :" << endl;

    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int num)
{
    cout << "Pattern 5 :" << endl;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int num)
{
    cout << "Pattern 6 :" << endl;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{

    int num;
    cin >> num;
    cout << "No of lines : " << num << endl;
    pattern6(num);

    return 0;
}