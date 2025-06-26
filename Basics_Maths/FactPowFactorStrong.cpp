#include <bits/stdc++.h>
using namespace std;

int factorialNum(int n)
{ // #1
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int powerOfNum(int num, int power)
{ // #2
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result *= num;
    }
    return result;
}

void factorOfNum(int num)
{ // #3
    for (int i = num; i >= 1; i--)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}

// strong number mean 145= 1!+4!+5! if both of this are equall then known as strong number
int strongNum(int num)
{ // #4
    if (num == 0)
        return 0;       // edge case
    int original = num; // storing the original number
    int storingFactNum = 0;
    while (num != 0 or num > 0 or num >= 1)
    { // can be selected any one
        storingFactNum += factorialNum(num % 10);
        num /= 10;
    }
    if (storingFactNum == original)
        return 1; // yes it's the strong number
    else
        return 0; // no not a storng number
}
