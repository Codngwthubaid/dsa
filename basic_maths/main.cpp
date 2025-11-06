#include <bits/stdc++.h>
using namespace std;

int countDigits(int num)
{
    // method 1
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;

    // method 2
    cout << (int)(log10(num) + 1);
}

int reverseNum(int num)
{
    while (num > 0)
    {
        int revNum = 0;
        while (num != 0)
        {
            int ld = num % 10;
            if ((revNum > INT_MAX) || (revNum == INT_MAX && ld > 7))
                return 0;
            if ((revNum < INT_MIN) || (revNum == INT_MIN && ld < -8))
                return 0;
            revNum = (revNum * 10) + ld;
            num /= 10;
        }
        return revNum;
    }
}

bool palindrome(int num)
{
    int stNum = num;
    int revNum = 0;
    while (num > 0)
    {
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num /= 10;
    }
    if (stNum == revNum)
        return true;
    else
        return false;
}

bool armStrong(int num)
{
    int sum = 0;
    int strNum = num;

    int digits = 0;
    int cd = num;
    while (cd > 0)
    {
        digits++;
        cd /= 10;
    }

    while (num > 0)
    {
        int ld = num % 10;
        sum += pow(ld, digits);
        num /= 10;
    }
    return sum == strNum;
}

void printAllDivisor(int num)
{
    vector<int> v;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            v.push_back(i);
            if (num / i != i)
            {
                v.push_back(num / i);
            }
        }
    }
    sort(v.begin(), v.end());
    for (auto it : v)
        cout << it << " ";
}

bool isPrime(int num)
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
        return true;
    else
        return false;
} 

int main()
{
    int num;
    cin >> num;
    int result = isPrime(num);
    cout << result;
    return 0;
}  


// 123*Paypal@Ubaid*123