/*
 Kadane’s algorithm 
 TC: O(n)
 SC: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int getSum(int a[], int size)
{
    int ans = INT_MIN, currSum = 0;
 
    for (int i = 0; i < size; i++) {
        currSum = currSum + a[i];
        if (ans < currSum)
            ans = currSum;
 
        if (currSum < 0)
            currSum = 0;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<getSum(arr,n);

    return 0;
}
