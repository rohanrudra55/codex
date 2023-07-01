#include <bits/stdc++.h>
using namespace std;

int isPrime(int N)
{
    int c = 2;
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            c++;
            if ((N / i) != i)
                c++;
        }
    }
    if (c == 2)
        return 1;
    else
        return 0;
}

int solution()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}