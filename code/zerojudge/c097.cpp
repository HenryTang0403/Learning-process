#include<iostream>
using namespace std;
int n,k,ans;
int main(){
    while(cin>>n>>k){
        ans=0;
        while(n>=k){
            n-=k;
            n++;
            ans+=k;
        }
        ans+=n;
        cout<<ans<<"\n";
    }
}