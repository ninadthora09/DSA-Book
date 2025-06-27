#include <bits/stdc++.h>
using namespace std;

int binToDec(int num)
{
    int deciNum = 0;
    int count = 0;
    while (num > 0)
    {
        deciNum = deciNum + (num % 10) * pow(2, count);
        count++;
        num /= 10;
    }
    return deciNum;
}
vector<int> decToBin(int num)
{ // whole number
    // brute force method this can be solved using the recursion
    vector<int> arr;
    while (num > 0)
    {
        arr.push_back(num % 2);
        num /= 2;
    }
    reverse(arr.begin(), arr.end());
    return {arr};
}

