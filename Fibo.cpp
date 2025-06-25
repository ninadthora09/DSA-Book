#include <bits/stdc++.h>
using namespace std;

vector<int> fiboSeries(int a, int b, int n)
{ // most of the time void is used
    if (a < 0 or b < 0)
        return {-1};
    int nextResult = 0;
    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    for (int i = 2; i < n; i++)
    {
        nextResult = a + b;
        arr.push_back(nextResult);
        a = b;
        b = nextResult;
    }
    return {arr};
}