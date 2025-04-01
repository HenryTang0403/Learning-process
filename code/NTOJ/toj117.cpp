#include<iostream>
using namespace std;
int a,mx=0;
int main(){
    cin>>a;
    for(int i=0,l;i<a;i++){
        cin>>l;
        if(l>mx) mx=l;
    }
    cout<<mx;
}