#include<bits/stdc++.h>
using namespace std;

void Leap_year(int year){
    if((year%4==0 and year%100!=0) /*This covers normal leap years like 2024, 2016, etc.*/or (year%400==0)/*Like 2000, 1600)*/)
    {
        cout<<"Leap year";
    }
    else cout<<"Not a leap year";
}
