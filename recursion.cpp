#include <bits/stdc++.h>
using namespace std;

int c = 0;

// void print()
// {    if (c == 5)
//         return;
//     cout << c << endl;
//     c++;
//     print();
// }

// void printName(int i, int n)
// {
//     if (i > n)
//         return;
//     cout << "Ubaid" << endl;
//     printName(i + 1, n);
// }

// void print1toN(int i, int n)
// {
//     if (i > n)
//         return;
//     cout << i << endl;
//     print1toN(i + 1, n);
// }

// void printNto1(int i, int n)
// {
//     if (i < 1)
//         return;
//     cout << i << endl;
//     printNto1(i - 1, n);
// }

// void print1toNbyBT(int i, int n)
// {
//     if (i < 1)
//         return;
//     print1toNbyBT(i - 1, n);
//     cout << i << endl;
// }

// void printNto1byBT(int i, int n)
// {
//     if (i > n)
//         return;
//     printNto1byBT(i + 1, n);
//     cout << i << endl;
// }

// void printByParameter(int n, int sum)
// {
//     if (n < 1)
//     {
//         cout << sum;
//         return;
//     }
//     printByParameter(n - 1, sum + n);
// }

// int printByFunctional(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + printByFunctional(n - 1);
// }

// int printfactorialByFunctional(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * printfactorialByFunctional(n - 1);
// }

// int reverseArrBy2PointerApproach(int left, int arr[], int right)
// {
//     if (left >= right)
//         return;
//     swap(arr[left], arr[right]);
//     reverseArrBy2PointerApproach(left + 1, arr, right - 1);
// }

// string checkStr(string s)
// {
//     s.erase(remove_if(s.begin(), s.end(), [](char ch)
//                       { return !isalnum(ch); }),
//             s.end());

//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     return s;
// 
// }

// bool checkPalindrom(int i, string &s)
// {
//     if (i > s.size() / 2)
//     {
//         return true;
//     }
//     if (s[i] != ' ')
//     {
//         if (s[i] != s[s.size() - i - 1])
//         {
//             return false;
//         }
//     }
//     return checkPalindrom(i + 1, s);
// }

int main()
{
    int n, i = 0, sum = 0;
    cout << "function starting" << endl;
    // cin >> n;
    // print();
    // printName(i, n);
    // print1toN(i, n);
    // printNto1(n, n);
    // print1toNbyBT(n, n);
    // printNto1byBT(i, n);
    // printByParameter(n, sum);
    // int result = printfactorialByFunctional(n);
    // cout << result;
    // int index = 0;
    // int arr[n];
    // for (int i = 0; i < arr[n]; i++)
    //     cin >> n;
    // reverseArrBy2PointerApproach(index, arr, n);
    string name = "A man, a plan, a canal: Panama";
    string clearedName = checkStr(name);
    cout << clearedName << endl;
    cout << checkPalindrom(i, clearedName) << endl;

    return 0;
}
