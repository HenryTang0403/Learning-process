#include<iostream>
using namespace std;
int main(){
    int t,n,m,arr[122];
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        for(int j=1;j<=n*m;j++){
            cin>>arr[j];
        }
        bool s=false;
        for(int j=1;j<=m*n/2;j++){
            if(arr[j]!=arr[n*m-j+1]){
                s=true;
                break;
            }
        }
        if(s)cout<<"keep defending\n";
        else cout<<"go forward\n";
    }
}