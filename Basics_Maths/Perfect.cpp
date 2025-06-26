#include <bits/stdc++.h>
using namespace std;

int perfectNum(int num)
{ // 1+2+3=6 number which is equal to the sum of it's proper divisors
    // 1+2+4+7+14=28 proper divisor means that should below that that number
    if (num < 1 or num == 0)
        return 0;
    int new_total = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            new_total += i;
        }
    }
    if (new_total == num)
    {
        return 1; // Yes Perfect number
    }
    else
        return 0; // Not a perfect number
}

// big brother of the perfect number is abundant number
// where the sum proper divisors of a number is excludeing the number is more than number
// 12:1+2+3+4+6=16
void abundantNum(int number)
{
    int total = 0;
    for (int i = number - 1; i >= 1; i--)
    {
        if (number % i == 0)
        {
            total += i;
        }
    }
    if (total > number)
    {
        cout << "Yes it's Abundant Number";
    }
    else
        cout << "Not a Abundant Number";
}

//(6, 28) 1+2+3+6=12 → 12/6=2
//        1+2+4+7+14+28=56 → 56/28=2 // it cann be float also so the float is taken
int friendlyPairs(int num_01, int num_02)
{
    int total_01 = 0;
    for (int i = 1; i < num_01; i++)
    {
        if (num_01 % i == 0)
        {
            total_01 += i;
        }
    }
    float numOnesAbundancy = total_01 / num_01;
    int total_02 = 0;
    for (int i = 1; i < num_02; i++)
    {
        if (num_02 % i == 0)
        {
            total_02 += i;
        }
    }
    float numTwoAbundancy = total_02 / num_02;
    if (numOnesAbundancy == numTwoAbundancy)
    {
        return 1; // Yes the numbers are friendly pairs
    }
    else
        return 0; // Numbers are not friendly pairs
}

// amicable means the sum of the proper divisors of num1 is equal to the num2 and
// sum of the proper divisor of num2 is equal to the num1
// 220 = 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
// 284 = 1 + 2 + 4 + 71 + 142 = 220
int amicablePairs(int num_01, int num_02)
{
    int total_01 = 0;
    for (int i = 1; i < num_01; i++)
    {
        if (num_01 % i == 0)
        {
            total_01 += i;
        }
    }
    int total_02 = 0;
    for (int i = 1; i < num_02; i++)
    {
        if (num_02 % i == 0)
        {
            total_02 += i;
        }
    }
    if (num_01 == total_02 and num_02 == total_01)
    {
        return 1; // Yes the numbers are amicable pairs
    }
    else
        return 0; // Numbers are not amicable pairs
}

int perfectSquare(int wholeNum)
{
    if (wholeNum <= 0)
        return 0; // Not valid
    float num = pow(wholeNum, 0.5);
    if (wholeNum / num == num) // int/float which gives the quetient
    {
        return 1; // means perfect square
    }
    else
        return 0; // means not the perfectsquare
}