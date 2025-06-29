#include <bits/stdc++.h>
using namespace std;

string armStrongNum(int num)
{ // #1  sum of cube of each digit is equal to number 1^3+ 5^3+ 3^3= 153
    num = abs(num);
    if (num == 0 or num <= 9)
        return "Not a Armstrong Number";
    int original = num;
    int total = 0;
    while (num != 0)
    {
        total = total + pow((num % 10), 3);
        num /= 10;
    }
    if (total == original)
        return "Yes It's a Armstrong Number";
    else
        return "Not a Armstrong Number";
}
// Armstrong Number in range

vector<int> armStrongInRange(int n, int m)
{ // #2    Range(100,1000) 153,370,371,407 
    n = abs(n);
    m = abs(m);
    vector<int> arr;
    for (int i = n; i <= m; i++)
    {
        int original = i;
        int temp = i;
        int total = 0;
        while (temp > 0)
        {
            total = total+ pow((temp % 10), 3);
            temp /= 10;
        }
        if (total == original)
        {
            arr.push_back(total);
        }
    }
    return {arr};
}
