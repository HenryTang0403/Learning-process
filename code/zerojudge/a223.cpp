#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1000010];
    cin>>n;
    for(int i=1;i<=n;i++)cin>>arr[i];
    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}