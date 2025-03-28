#include<bits/stdc++.h>
using namespace std;
int a;
pair<int,int> p[1005];
int main(){
    cin>>a;
    for(int i=1;i<=a;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p+1,p+a+1);
    for(int i=1;i<=a;i++){
        cout<<p[i].first<<" "<<p[i].second<<"\n";
    }
}