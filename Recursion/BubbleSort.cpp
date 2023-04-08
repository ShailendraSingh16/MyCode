#include<iostream>
using namespace std;

void sortArray(int *arr, int n){
    
    // base case - already sorted
    if(n==0 || n==1){
        return;
    }
    
    // 1 case solve kar liya it will place the largest element to right place
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
     sortArray(arr,n-1);
}

int main(){
    int n;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;

    return 0;
}
