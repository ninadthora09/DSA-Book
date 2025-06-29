#include<bits/stdc++.h>
using namespace std;

int NewArr(vector<int> arr){
    int len= arr.size();
    int j=0;
    for(int i=0;i<len;i++){
        if(arr[i]!=4){  // i for reading
            arr[j]=arr[i]; // used for writing
            j++; 
        }
    }
    return j;
}

int main(){
    vector <int> arr={5,4,7,4,12}; // when array goes it goes by reference
    int final= NewArr(arr);

    for(int i=0;i<final;i++){
        cout<<arr[i]<<" ";  // 5,7,12
    }
}


// Question (given string remove the blank space)
// dont use the strlen() for string length 
//'\0' this says okay now stop the string

//    string name;
//     int count=0;
//     getline(cin,name);
//     for(int i=0;name[i]!='\0';i++){
//         count++;
//     }
//     int strlen=count;
//     int j=0;
//     for(int i=0;i<strlen;i++){
//         if(name[i]!=' '){
//             name[j]=name[i];
//             j++;
//         }
//     }
//      name.resize(j); // it chopps the the garbage values which are not essential
//      cout<<name; 