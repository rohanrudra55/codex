#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int N)
{
    if (N == 1)
        return 1;
    long long sum = 0;
    for (int i = 1; i * i <= N; i++) // Will call N times
    {
        if (N % i == 0)
        {
            sum += i;
            if (i * i != N)
                sum += N / i;
        }
    }
    return sum + sumOfDivisors(N - 1); // Will call N times
}

long long sumOfDivisors(int N)
{
    long long sum = 0;
    for (int j = N; j > 0; j--)
    {
        for (int i = 1; i * i <= j; i++) // Will call j times
        {
            if (j % i == 0)
            {
                sum += i;
                if (i * i != j)
                    sum += j / i;
            }
        }
    }
    return sum;
}

long long sumOfDivisors(int N)
{
    long long sum = 0;
    vector<int> temp(N + 1, 1);

    for (int i = 2; i <= N; i++)
    {
        sum += (N / i) * i;
    }
    return sum;
}

int solution()
{
    int n;
    cin >> n;
    cout << sumOfDivisors(n);
    return 0;
}