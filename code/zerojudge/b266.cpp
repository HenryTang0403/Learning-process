#include<bits/stdc++.h>
using namespace std;
int arr[15][15],r,c,m;
void fl(){
    int tmp[15][15];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            tmp[i][j]=arr[r-i+1][j];
        }
    }
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            arr[i][j]=tmp[i][j];
        }
    }
}
void ro(){
    int tmp[15][15];
    for(int i=1;i<=c;i++){
        for(int j=1;j<=r;j++){
            tmp[i][j]=arr[j][c-i+1];
        }
    }
    swap(r,c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            arr[i][j]=tmp[i][j];
        }
    }
}
int main(){
    cin>>r>>c>>m;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>arr[i][j];
        }
    }
    int n[20];
    for(int i=1;i<=m;i++){
        cin>>n[i];
    }
    for(int i=m;i>=1;i--){
        if(n[i]==0)ro();
        else if(n[i]==1)fl();
    }
    cout<<r<<" "<<c<<"\n";
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}