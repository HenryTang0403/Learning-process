#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=2500)cout<<1<<" "<<((n-1)/25)+1<<" "<<(n-1)%25+1;
    else if(n<=7500)cout<<2<<" "<<((n-2501)/50)+1<<" "<<(n-2501)%50+1;
    else cout<<3<<" "<<((n-7501)/25)+1<<" "<<(n-7501)%25+1;
}