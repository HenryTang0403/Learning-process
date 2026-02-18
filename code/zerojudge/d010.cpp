#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    while(cin>>n){
        for(int i=1;i<n;i++){
            if(n%i==0)s+=i;
        }
        if(s<n)cout<<"虧數\n";
        else if(s==n)cout<<"完全數\n";
        else cout<<"盈數\n";
        s=0;
    }
    
}