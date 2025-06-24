#include <bits/stdc++.h>
using namespace std;

int gcdNum(int n, int m)
{
    if (n == 0 or m == 0)
        return 0;
    n = abs(n);
    m = abs(m);
    for (int i = min(n, m); i >= 1; i--)
    {
        if (n % i == 0 and m % i == 0)
            return i;
    }
    return 1;
}
