#include<bits/stdc++.h>
using namespace std;
int n,m,arr[1000005];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    sort(arr+1,arr+1+n);
    cin>>m;
    for(int i=1,x;i<=m;i++){
        cin>>x;
        cout<<upper_bound(arr+1,arr+1+n,x)-lower_bound(arr+1,arr+1+n,x)<<"\n";
    }
}