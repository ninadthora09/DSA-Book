#include <bits/stdc++.h>
using namespace std;

int gcdNum(int n, int m)
{ // gcd and hcf are same (greatest common divisor and higest common factor)
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

int lcmNum(int num1, int num2)
{
    // LCM mean lowest common (multiple)

    // #1 dircect formula
    int lcm = (num1 * num2) / gcdNum(num1, num2);
    // return lcm;

    // #2 is direct method
    num1 = abs(num1);
    num2 = abs(num2);
    int mulOfbothNum = num1 * num2;
    for (int i = 1; i <= mulOfbothNum; i++)
    {
        if (i % num1 == 0 and i % num2 == 0)
        {
            return i;
        }
    }
    return 0;
}


// leap year code
void Leap_year(int year)
{
    if ((year % 4 == 0 and year % 100 != 0) /*This covers normal leap years like 2024, 2016, etc.*/ or (year % 400 == 0) /*Like 2000, 1600)*/)
    {
        cout << "Leap year";
    }
    else
        cout << "Not a leap year";
}