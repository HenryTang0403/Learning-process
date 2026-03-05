#include<iostream>
using namespace std;
int main(){
    int n,m,a[100001],l,r,ans;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=m;i++){
            cin>>l>>r;
            ans=0;
            for(int j=l;j<=r;j++){
                ans+=a[j];
            }
            cout<<ans<<"\n";
        }
    }
}