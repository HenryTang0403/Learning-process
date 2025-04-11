#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ans=n-1;
    for(int i=n-1;i>=0;i--){
        bool a=1;
        for(int l=i,r=n-1;l<r;l++,r--){
            if(s[l]!=s[r]){
                a=0;
                break;
            }
        }
        if(a){
            ans=i;
        }
    }
    cout<<ans<<"\n";
}