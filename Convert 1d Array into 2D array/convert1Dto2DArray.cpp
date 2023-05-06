#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(int a, int b, int n, vector<int> arr){
    vector<vector<int>>arr1(a,vector<int>(b,0));
    for(int i=0;i<n;i++){
        arr1[i/b][i%b]=arr[i];
    }
    return arr1;
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a,b;
    cin>>a>>b;

    vector<vector<int>>ans=solve(a,b,n,arr);
    int row=ans.size();
    int col=ans[0].size();

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
