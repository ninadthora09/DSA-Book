#include <bits/stdc++.h>
using namespace std;

int hexaToDec(int num){
    int deciNum = 0;
    int count = 0;
    while (num > 0)
    {
        int extract= num%10;
        deciNum = pow(16, count);
        count++;
        num /= 10;
    }
    return deciNum;
}
int main(){
   int value;
    cout << "Enter hex (prefix 0x): ";
    cin >>std::hex>> value;  // Reads hex input directly
    cout << "Decimal: " << value << endl;
    return 0;
    // int final=hexaToDec(n);
    // cout<<final;
}