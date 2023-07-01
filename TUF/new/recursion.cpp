#include <bits/stdc++.h>
using namespace std;
int solution();

// Q1
void printNos(int N)
{
    if (N != 1)
        printNos(N - 1);
    cout << N;
}

// Q2
void printSon(int N)
{
    cout << N;
    if (N != 1)
        printSon(N - 1);
}

// Q2
int printItoN(int i, int n)
{
    if (i == n)
        return i;
    return i + printItoN(i + 1, n);
}

// Q3 Reverse and Array
void reverseArray(int i, int n, int arr[])
{
    if (i < n / 2)
    {
        swap(arr[i], arr[n - 1 - i]);
        reverseArray(i + 1, n, arr);
    }
}

// Q4 palindrome
void palindrome(int i, string arr)
{
    if (i < arr.length() / 2)
    {
        if (arr[i] == arr[arr.length() - 1 - i])
            palindrome(i + 1, arr);
        else
        {
            cout << "Not Palindrome";
            return;
        }
    }
    else
        cout << "Palindrome";
}
// abcba -> abcba
int isPalindrome(string S)
{
    int n = S.size();
    int i = 0;
    while (i < n / 2)
    {
        if (S[i] != S[n - i - 1])
            return 0;
        i++;
    }
    return 1;
}

// Fibonacci
vector<long long> printFibb(int n)
{
    long long a = 1;
    long long b = 1;
    vector<long long> arr;
    arr.push_back(a);
    arr.push_back(b);
    for (int i = 3; i <= n; i++)
    {
        long long c = a + b;
        a = b;
        b = c;
        arr.push_back(c);
    }
    return arr;
}

// Output
int solution()
{
    int n;
    cin >> n;

    // printNos(n);
    // cout<<endl;
    // printSon(n);

    // cout<<printItoN(1,n); // SUM

    // int arr[] = {1, 2, 3, 4, 5};
    // reverseArray(0, n, arr);
    // for (int i = 0; i < n; i++)
    //     cout << arr[i] << " ";

    // string str;
    // cin>>str;
    // palindrome(0,str);
    // cout<<isPalindrome(str);
    vector<long long> arr = printFibb(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Main
int main()
{
    return solution();
}