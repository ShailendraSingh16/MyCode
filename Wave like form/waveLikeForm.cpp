#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& nums, int m , int n){
   for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < m; i++) {
                cout<<nums[i][j]<<" ";
            }
        }
       
        else {
            for (int i = m - 1; i >= 0; i--) {
                  cout<<nums[i][j]<<" ";
            }
        }
    }
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<int>>nums(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }

    vector<int>ans;

    solve(nums,m,n);

    return 0;
}
