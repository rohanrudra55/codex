#include "alpha.h"

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int solution()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m);
    return 0;
}