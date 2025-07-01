#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArrleft(vector<int> arr, int m)
{

    int len = arr.size();
    int k = m % len;
    for (int i = 0; i < k / 2; i++)
    {                                       // step 1
        int temp = arr[i];
        arr[i] = arr[k - i - 1];
        arr[k - i - 1] = temp;
    }

    int end = len - 1;
    int nlen = (k + end) / 2; //(n-k)
    for (int i = k; i <= nlen; i++)
    {                                       // step 2
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    reverse(arr.begin(), arr.end());       // step 3
    return {arr};
}

int main()
{
    vector<int> arrr = {1, 2, 3, 4, 5, 6, 7};
    int k;
    cin >> k;
    vector<int> arr = rotateArrleft(arrr, k);
    for (int i : arr)
    {
        cout << i << " ";
    }
}