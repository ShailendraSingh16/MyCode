 #include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int small=min(a,b);

    for(int i=small;i>=1;i--){
        if((a%i==0) && (b%i==0)){
            cout<<i;
            break;
        }
    }

    return 0;
}
