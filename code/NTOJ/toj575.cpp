#include<bits/stdc++.h>
using namespace std;
vector<int>f[1000000];
int main(){
    int N,K;
    cin>>N>>K;
    for(int i=0,a,b;i<K;i++){
        cin>>a>>b;
        f[a].push_back(b);
        f[b].push_back(a);
    }
    for(int i=1;i<=N;i++) sort(f[i].begin(),f[i].end());
    for(int i=1;i<=N;i++){
        for(int j=0;j<(int)f[i].size();j++){
            if(j!=0)cout<<" ";
            cout<<f[i][j];
        }
        cout<<"\n";
    }
}