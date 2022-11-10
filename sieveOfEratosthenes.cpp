#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int count=0;
    vector<bool>prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=i+j){
                prime[j]=0;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}
