#include <bits/stdc++.h>
using namespace std;

string armStrongNum(int n)
{ // #1
    n = abs(n);
    if (n == 0 or n <= 9)
        return "Invalide Number";
    int num = n;
    int NewNum = 0;
    while (n != 0)
    {
        NewNum = NewNum + pow((n % 10), 3);
        n /= 10;
    }
    if (NewNum == num)
        return "Yes It's a Armstrong Number";
    else
        return "Not a Armstrong Number";
}
// Armstrong Number in range

vector<int> armStrongInRange(int n, int m)
{ // #2
    n = abs(n);
    m = abs(m);
    vector<int> arr;
    for (int i = n; i <= m; i++)
    {
        int original = i;
        int temp = i;
        int NewNum = 0;
        while (temp > 0)
        {
            NewNum = NewNum + pow((temp % 10), 3);
            temp /= 10;
        }
        if (NewNum == original)
        {
            arr.push_back(NewNum);
        }
        else
            continue;
    }
    return {arr};
}
