#include<bits/stdc++.h>
using namespace std;
int n,arr[50010][2],ans;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    for(int i=0,f;i<n;i++){
        if(arr[i][1]==0){
            arr[i][1]=1;
            f=arr[i][0];
            while(f!=i){
                arr[f][1]=1;
                f=arr[f][0];
            }
            ans+=1;
        }
    }
    cout<<ans;
}