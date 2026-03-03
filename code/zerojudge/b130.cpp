#include<iostream>
using namespace std;
int n,x,a[1001],m;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<=1000;i++){
        if(a[i])m++;
    }
    cout<<m<<"\n";
    for(int i=1;i<=1000;i++){
        if(a[i])cout<<i<<" ";
    }
}