#include<bits/stdc++.h>
using namespace std;

int kadaneAlgo(int* arr, int n){
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currSum+=arr[i];

        if(currSum<0){
            currSum=0;
        }

        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;

    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<kadaneAlgo(arr,n);

 delete []arr;

    return 0;
}
