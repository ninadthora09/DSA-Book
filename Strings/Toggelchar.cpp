#include <bits/stdc++.h>
using namespace std;

void toggle(string str){
    string str;
    cin >> str;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' and str[i] <= 'z')
        {
            int toggle = abs(int(str[i]) - 32); // ascii value of that particular character
            char alpha = char(toggle);
            str[i] = alpha;  // assigning the character which is toggled
        }
        else if (str[i] >= 'A' and str[i] <= 'Z')
        {
            int toggle = abs(int(str[i] + 32)); // addition because 65+32= 97 so 97 is 'a'
            char alpha = char(toggle);
            str[i] = alpha;
        }
    }
    cout<<str;
}

void removeVowels(string str){

    int len=str.length();
    for(int i=0;i<len;i++){
        if(str[i]=='a' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='e'){
            str.erase(i,1); // it basically erases that particular element only 
            //remove 1 character starting at index 1 ('e')
            i--; // this basically moves the index backwards
        }
    }
    cout<<str;
}

