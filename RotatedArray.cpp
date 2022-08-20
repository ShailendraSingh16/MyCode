#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& arr, int k){
  vector<int>temp(arr.size());

  for(int i=0;i<arr.size();i++){
    temp[(i+k)%arr.size()]=arr[i];
  }
  arr=temp;
}

int main(){
  int k;
  cin>>k;

  vector<int>arr;

  int a;
  while(cin>>a){
    arr.push_back(a);
  }

  rotateArray(arr,k);

    for(int it:arr){
      cout<<it<<" ";
    }

  return 0;
}
