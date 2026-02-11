#include<iostream>
using namespace std;
int main(){
    int n,g;
    double t;
    while(cin>>n){
        t=0;
        for(int i=0;i<n;i++){
            cin>>g;
            t+=g;
        }
        if((t/n)>59)cout<<"no\n";
        else cout<<"yes\n";
    }
}