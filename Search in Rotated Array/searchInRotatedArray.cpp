#include<bits/stdc++.h>
using namespace std;

     int getPivot(int A[], int l, int h){
        int s=l;
        int e=h;
        
        int mid=s+(e-s)/2;
        
        while(s<e){
            if(A[mid]>=A[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    
    int binarySearch(int A[], int l, int h, int key){
        int s=l;
        int e=h;
        
        int mid=s+(e-s)/2;
        
        while(s<=e){
            if(A[mid]==key){
                return mid;
            }
            if(A[mid]>key){
                e=mid-1;
            }
            if(A[mid]<key){
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    
    int search(int A[], int l, int h, int key){
        
        int pivot=getPivot(A,l,h);
        
        
        if(A[pivot]<= key && key<=A[h]){
            return binarySearch(A,pivot,h,key);
        }
        return binarySearch(A,l,pivot-1,key);
    }

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<search(arr,0,n-1,key);

    return 0;
}
