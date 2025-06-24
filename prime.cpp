#include <bits/stdc++.h>
using namespace std;

string primeChecker(int num)
{ // #1
    int count;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return "Yes Prime";
    else
        return "Not a Prime";
}

int primeInRangeCount(int m)
{ // #2
    int mainCount = 0;
    for (int i = m; i >= 1; i--)
    {
        int count = 0;
        for (int j = m; j >= 1; j--)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            mainCount++;
        }
    }
    return mainCount;
}
