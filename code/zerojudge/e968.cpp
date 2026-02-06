#include<iostream>
using namespace std;
int n,a[21];
int main(){
    cin>>n;
    for(int i=0,b;i<3;i++){
        cin>>b;
        a[b]=1;
    }
    for(int i=n;i>=1;i--){
        if(!a[i])cout<<"No. "<<i<<"\n";
    }
}