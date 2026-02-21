#include<iostream>
using namespace std;
int main(){
    int n,t;
    bool d=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        t=0;
        if(!(n%i)){
            if(d)cout<<" * ";
            d=1;
            while(!(n%i)){
                n/=i;
                t++;
            }
            if(t==1)cout<<i;
            else cout<<i<<"^"<<t;
        }
    }
}