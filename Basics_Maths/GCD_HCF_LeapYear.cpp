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

// leap year code
void Leap_year(int year){
    if((year%4==0 and year%100!=0) /*This covers normal leap years like 2024, 2016, etc.*/or (year%400==0)/*Like 2000, 1600)*/)
    {
        cout<<"Leap year";
    }
    else cout<<"Not a leap year";
}