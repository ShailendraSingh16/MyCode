#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    
     int i,total=1;

     for(i=2;i<(n+1);i++){
        total+=i;
        total-=arr[i-2];
     }
     return total;
}

int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }

        cout<<missingNumber(arr,n);
        

    return 0;
}

/* TC: O(N)
   SC: O(1) 
*/
