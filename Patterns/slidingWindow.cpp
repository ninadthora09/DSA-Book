#include<bits/stdc++.h>
using namespace std;

int slideIt(vector<int> arr,int k){
    int size= arr.size();
    int max_sum;
    int window_sum=0;
    for(int i=0;i<k;i++){
        window_sum=window_sum+arr[i];
    }
    max_sum=window_sum;
    for(int i=k;i<size;i++){
        window_sum=window_sum-arr[i-k]+arr[i];
        if(window_sum>max_sum){
            max_sum=window_sum;
        }
    }
return max_sum;
}