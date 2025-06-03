#include<bits/stdc++.h>
using namespace std;
long long n,k,total;
int arr[200000][2],diff[200000];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>arr[i][0];
        total+=arr[i][0];
    }
    for(int i=1;i<=n;i++){
        cin>>arr[i][1];
        diff[i]=arr[i][1]-arr[i][0];
    }
    sort(diff+1,diff+1+n);
    for(int i=0;i<=n;i++){
        if(total>=k){
            cout<<n-i;
            break;
        }
        total+=diff[n-i];

    }
}