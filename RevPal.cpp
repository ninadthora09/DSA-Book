#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int reverse=0;
    while(n!=0){
        reverse=reverse*10+(n%10);
        n/=10;
    }
    return reverse;
}
string palindromeNum(int n){
    if(n==0 or n<=9) return "No not a palindrome";
    n=abs(n);
    int store=n;
    int reserve =0;
    while(n>=1){
        reserve=reserve*10+(n%10);
        n/=10;
    }
    if(reserve==store) return "Yes Palindrome";
    else return "No not a palindrome";
}