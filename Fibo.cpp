#include <bits/stdc++.h>
using namespace std;

void fiboSeries(int a, int b, int n)
{ // most of the time void is used
    int nextResult = 0;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        nextResult = a + b;
        cout << nextResult << " ";
        a = b;
        b = nextResult;
    }
}

// Nth term of the fiboNacciSeries

int nthTermfiboSeries(int a, int b, int n)
{

    int nextResult = 0;
    if (n == 1)
        return a;
    if (n == 2)
        return b;
    for (int i = 3; i < n; i++)
    {
        nextResult = a + b;
        a = b;
        b = nextResult;
    }
    return nextResult;
}
