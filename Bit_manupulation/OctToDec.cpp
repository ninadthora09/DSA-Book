#include <bits/stdc++.h>
using namespace std;

int octToDec(int num)
{ //(157)base to 8 = 1*8^2+ 5*8^1 + 7*8^0= 64+40+7 = (111)decimal number
    int decNum = 0;
    int count = 0;
    while (num > 0)
    {
        decNum = decNum + (num % 10) * pow(8, count);
        count++;
        num /= 10;
    }
    return decNum;
}

vector<int> DecToOct(int num)
{
    // number is divided by 8 then quetients are consider
    vector<int> arr;
    while (num > 0)
    {
        arr.push_back(num % 8); // numbers remainder is pushed in array
        num /= 8;
    }
    reverse(arr.begin(), arr.end());
    return {arr};
}
int main()
{
    int n;
    cin >> n;
    vector<int> final = DecToOct(n);
    for (int i : final)
    {
        cout << i;
    }
}
