#include <bits/stdc++.h>
using namespace std;

int ConvertHexaToDec(string str)
{ // str means a hexsdecimal number str="1A"or "1a" both are same
    int deci = 0;
    int count = 0;
    int lenOfStr = str.size();
    for (int i = lenOfStr - 1; i >= 0; i--)
    {
        if (str[i] >= '0' and str[i] <= '9')
        {
            int num1 = (int)str[i] - 48; // basically 0-9 asscii value start from 48 to 57
            // typecasting character gives the ascii value of that character
            deci = deci + num1 * pow(16, count);
            count++;
        }
        else if (str[i] >= 'A' and str[i] <= 'F')
        {
            // hexadecimal A-F are 10-16 so type casting them
            // asscii value of A starts with 65
            // 65-55=10, 66-55=11,67-55=12 ..... A=10,B=11,C=12.....
            int num2 = (int)str[i] - 55;
            deci = deci + num2 * pow(16, count);
            count++;
        }
    }
    return deci;
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    while(n!=0){
        int ex=n%10;
        if(ex==0){
            ex=1;
            arr.push_back(ex);
        }
        else arr.push_back(ex);
        n/=10;
    }
    int len=arr.size();
    for(int i=0;i<len/2;i++){
        int temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;
    }
    for(int i:arr){
        cout<<i;
    }
}