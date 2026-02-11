#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>n;
    while(1){
        cin>>t;
        if(t==0)break;
        else if(t%n==0)cout<<t/n<<"\n";
        else cout<<n-t%n<<"\n";
    }
}