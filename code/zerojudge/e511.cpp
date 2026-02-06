#include<iostream>
using namespace std;
int t,n,mx=0,mn=100;
int main(){
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for(int j=0,x;j<n;j++){
            cin>>x;
            if(x>mx)mx=x;
            if(x<mn)mn=x;
        }
        cout<<(mx-mn)*2<<"\n";
        mx=0;
        mn=100;
    }
}