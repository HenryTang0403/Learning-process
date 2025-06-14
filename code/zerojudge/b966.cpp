#include<bits/stdc++.h>
using namespace std;
pair<int,int>arr[10010];
int n,ans,f,s;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    f=arr[0].first,s=arr[0].second;
    for(int i=1;i<n;i++){
        if(s>arr[i].first){
            s=max(s,arr[i].second);
        }
        else{
            ans+=s-f;
            f=arr[i].first;
            s=arr[i].second;
        }
    }
    ans+=s-f;
    cout<<ans;
}