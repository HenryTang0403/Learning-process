#include<bits/stdc++.h>
using namespace std;
int ans=0,arr[5][6];
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==arr[i+1][j]&&arr[i][j]==arr[i+2][j]) ans++;
            if(arr[i][j]==arr[i][j+1]&&arr[i][j]==arr[i][j+2]) ans++;
        }
    }
    if(ans>0) cout<<"Yes\n";
    else cout<<"No\n";
}