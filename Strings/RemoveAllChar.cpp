#include<bits/stdc++.h>
using namespace std;

string  stringWithalpha(string str){
    int i=0;
    while(i<str.length()){
        // it's very imp when string goes in loop then length of string changes when we erase any character from it 
        if((str[i]>='a' and str[i]<='z') ||(str[i]>='A' and str[i]<='Z')){
            i++;
        }
        else{
            str.erase(i,1); // this is more costly just for shiftinig so a
            // alternatly use the other string for this
        }
    }
return str;
}
