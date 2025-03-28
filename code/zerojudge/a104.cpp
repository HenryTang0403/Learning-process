#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int arr[10000];
        for(int i=1;i<=n;i++)cin>>arr[i];
        sort(arr+1,arr+n+1);
        for(int i=1;i<=n-1;i++)cout<<arr[i]<<" ";
        cout<<arr[n]<<"\n";
    }
}