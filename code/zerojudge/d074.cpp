#include<iostream>
using namespace std;
int n,b;
int main(){
    cin>>n;
    for(int i=0,c;i<n;i++){
        cin>>c;
        if(c>b)b=c;
    }
    cout<<b;
}