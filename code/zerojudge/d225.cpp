#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
    while((x%=y)&&(y%=x));
    return x+y;
}
int main(){
    int g,n;
    while(cin>>n){
        if(n==0)break;
        g=0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                g+=gcd(i,j);
            }
        }
        cout<<g<<"\n";
    }
}