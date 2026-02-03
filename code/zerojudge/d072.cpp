#include<iostream>
using namespace std;
int main(){
    int n,y;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>y;
        cout<<"Case "<<i<<": ";
        if(y%400==0)cout<<"a leap year\n";
        else if(y%100==0)cout<<"a normal year\n";
        else if(y%4==0)cout<<"a leap year\n";
        else cout<<"a normal year\n";
    }
}