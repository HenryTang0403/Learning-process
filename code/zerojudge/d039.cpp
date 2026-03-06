#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double n,m;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        cout<<(int)ceil((n-2)/3)*(int)ceil((m-2)/3)<<"\n";
    }
}