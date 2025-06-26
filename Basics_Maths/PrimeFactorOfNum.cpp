#include <bits/stdc++.h>
using namespace std;

// PrimeFactor of a Number
vector<int> PrimeFactor(int num)
{
    vector<int> arr;
    auto PrimeNum = [](int n) { // lambda function used in c++ it si the anonymous funtion 
        int count = 0;
        int value;
        for (int i = n; i >= 2; i--)
        {
            for (int j = i; j >= 1; j--)
            {
                if (i % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                value = i;
            }
            else
                return 0;
            break;
        }
        return value;
    };
    for (int i = num; i >= 3; i--)
    {
        if (num % (i - 1) == 0)
        {
            int result = PrimeNum(i - 1);
            if (result == 0)
            {
                continue;
            }
            else
                arr.push_back(result);
        }
        else
            continue;
    }
    return {arr};
}