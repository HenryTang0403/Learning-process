#include<bits/stdc++.h>
using namespace std;
int arr[21];
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int low=70,up=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>=60)break;
        low=arr[i];
    }
    if(low>60){
        cout<<"best case"<<"\n";
    }
    else{
        cout<<low<<"\n";
    }
    for(int i=n;i>=1;i--){
        if(arr[i]<60)break;
        up=arr[i];
    }
    if(up<60){
        cout<<"worst case"<<"\n";
    }
    else{
        cout<<up<<"\n";
    }
}