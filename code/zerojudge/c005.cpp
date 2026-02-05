#include<iostream>
using namespace std;
long long n,f,s,e;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        long long m=0;
        cin>>f;
        for(int j=0,t;j<f;j++){
            cin>>s>>t>>e;
            m+=(s*e);
        }
        cout<<m<<"\n";
    }
}