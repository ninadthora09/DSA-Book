#include <bits/stdc++.h>
using namespace std;

void automorphicNum(int number)
{
    // Automrphic Number means numbers whose square unit digit same as the number it self
    // 5: 5*5= 25, 6: 6*6=36 , 10:10*10=100
    int squareNum = number * number;
    int extra = squareNum % 10;
    if (extra == number)
    {
        cout << "Yes it's a automorphic Number";
    }
    else
        cout << "Not a automorphic Number";
}

void harshadNum(int num)
{ // harshad number means such number when we add digits of that number
    // so we get the new number and than we divide the original number and it gets divided giving remainder 0
    // that is the harshad number 18:1+8=9 (18%9==0), 10:1+0=1(10%1==0)
    int original = num;
    int total = 0;
    while (num != 0)
    {
        total += (num % 10);
        num /= 10;
    }
    if (original % total == 0)
    {
        cout << "Yes it's Harshad Number";
    }
    else
        cout << "No it's not Harshad Number";
}