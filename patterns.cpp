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

void pattern7(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * num - (2 * i + 1); j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern10(int num)
{
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int stars = i;
        if (i > 5)
            stars = 2 * num - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int num)
{
    int start = 1;
    for (int i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * num - 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }
}

void pattern13(int num)
{
    int start = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start += 1;
        }
        cout << endl;
    }
}

void pattern14(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern15(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'A'; ch < 'A' + (num - i + 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void pattern16(int num)
{
    for (int i = 0; i < num; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

void pattern17(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int break_point = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= break_point)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch;
        }

        cout << endl;
    }
}

void pattern19(int num)
{
    int init_space_1 = 0;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < init_space_1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        init_space_1 += 2;
        cout << endl;
    }
    int init_space_2 = 2 * num - 2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < init_space_2; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        init_space_2 -= 2;
        cout << endl;
    }
}

void pattern20(int num)
{
    int init_space = 2 * num - 2;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int stars = i;
        if (i > num)
        {
            stars = 2 * num - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= init_space; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;

        if (i < num)
        {
            init_space -= 2;
        }
        else
        {
            init_space += 2;
        }
    }
}

int pattern21(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == 0 || i == num - 1 || j == num - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int pattern22(int num)
{
    for (int i = 0; i < 2 * num - 1; i++)
    {
        for (int j = 0; j < 2 * num - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * num - 2) - j;
            int bottom = (2 * num - 2) - i;

            int result = (num - min(min(top, bottom), min(left, right)));
            cout << result;
        }
        cout << endl;
    }
}

// combine pattern7 nad pattern8 function together for getting pattern 9
int main()
{
    int num;
    cin >> num;
    cout << "No of lines : " << num << endl;
    pattern22(num);

    return 0;
}