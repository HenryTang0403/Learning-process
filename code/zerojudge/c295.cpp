#include<bits/stdc++.h>
using namespace std;
int n,m,arr[25][25],s,ans[25],r;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        sort(arr[i]+1,arr[i]+1+m);
        s+=arr[i][m];
    }
    cout<<s<<"\n";
    for(int i=1;i<=n;i++){
        if(s%arr[i][m]==0){
            ans[r]=arr[i][m];
            r+=1;
        }
    }
    if(r!=0){
        for(int i=0;i<r;i++){
            cout<<ans[i];
            if(i!=r-1)cout<<" ";
        }
    }
    else{
        cout<<"-1";
    }
}