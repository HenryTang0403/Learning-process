#include<iostream>
using namespace std;
int n,t=1,a[101],b[20001],x;
bool ans=false;
int main(){
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<20001;i++){
            b[i]=0;
        }
        ans=false;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                x=a[i]+a[j];
                if(b[x]!=0){
                    ans=true;
                    break;
                }
                else b[x]=1;
            }
            if(ans)break;
        }
        if(ans)cout<<"Case #"<<t++<<": It is not a B2-Sequence.\n\n";
        else cout<<"Case #"<<t++<<": It is a B2-Sequence.\n\n";
    }
}