#include<bits/stdc++.h>
using namespace std;
int n,w[100005],f[100005],id[100005];
long long ans,wi;
bool cmp(int a,int b){
    return w[b]*f[a]>w[a]*f[b];
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>w[i];
    for(int i=1;i<=n;i++)cin>>f[i],id[i]=i;
    sort(id+1,id+1+n,cmp);
    for(int i=1;i<=n;i++){
        ans+=wi*f[id[i]];
        wi+=w[id[i]];
    }
    cout<<ans<<endl;
}