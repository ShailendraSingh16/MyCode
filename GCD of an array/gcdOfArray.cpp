#include<bits/stdc++.h>
using namespace std;

long long int getGCD(vector<int> &arr, int index){

    if(index==arr.size()-1){
        return arr[index];
    }

    int a=arr[index];
    int b=getGCD(arr,index+1);

    return __gcd(a,b);
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<getGCD(arr,0);

    return 0;
}
