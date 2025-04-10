#include<iostream>
using namespace std;
long long n,q,arr[200000],pre[200000];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
    cin>>q;
    for(int i=1,a,b;i<=q;i++){
        cin>>a>>b;
        if(a<b)swap(a,b);
        cout<<pre[a]-pre[b-1]<<"\n";
    }
}