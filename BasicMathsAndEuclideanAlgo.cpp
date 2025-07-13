#include <bits/stdc++.h>
using namespace std;

int counter(int num)
{
    // method 1
    int count = 0;
    while (num > 0)
    {
        count += 1;
        num /= 10;
    }
    cout << "Count : " << count << endl;

    // method 2
    int result = (int)log10(num) + 1;
    cout << result << endl;
}

int rn(int num)
{
    int rn = 0;
    while (num > 0)
    {
        int in = num % 10;
        rn = (rn * 10) + in;
        num /= 10;
    }
    return rn;
}

int palindrome(int x)
{
    int revNum = 0;
    int temp = x;
    while (x != 0)
    {
        int lg = x % 10;
        if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lg > 7))
            return 0;
        if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && lg < -8))
            return 0;
        revNum = (revNum * 10) + lg;
        x = x / 10;
    }
    cout << revNum << endl;
    return revNum == temp;
}

int armStrong(int num)
{
    int temp = num;
    int storage = 0;
    while (num > 0)
    {
        int lg = num % 10;
        storage = storage + (lg * lg * lg);
        num /= 10;
    }
    return storage == temp;
}

int printAllDivisions(int num)
{
    vector<int> budget;
    // TC : O(sqrt(num))
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            budget.emplace_back(i);
            if ((num / i) != i)
            {
                budget.emplace_back(num / i);
            }
        }
    }
    // TC : O(num log num)
    sort(budget.begin(), budget.end());

    // TC : O(num)
    for (auto it : budget)
    {
        cout << it << endl;
    }

    // Total TC : O(sqrt(num)) + O(num log num) + O(num)
}

int primeNumbers(int num)
{
    int counter = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            counter++;
            if (num / i != i)
            {
                counter++;
            }
        }
    }
    if (counter == 2)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not a Prime" << endl;
    }
}

// TC : O(min(n1,n2))
int gcd(int n1, int n2)
{
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i;
        }
    }
    cout << gcd;
}

// Euclidean Algo - TC : O(log Φ(min(n1,n2)))
int gcd_EA(int n1, int n2)
{
    int gcd = 1;
    while ((n1 > 0) && (n2 > 0))
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
    {
        gcd = n2;
    }
    else
    {
        gcd = n1;
    }
    cout << gcd;
}

int main()
{

    int num = 17;
    int n1, n2;
    cin >> n1 >> n2;

    // counter(num);
    // rn(num);
    // palindrome(num);
    // int result = armStrong(num);
    // cout << result;
    // printAllDivisions(num);
    // primeNumbers(num);
    // gcd(n1, n2);
    // gcd_EA(n1, n2);

    return 0;
}
