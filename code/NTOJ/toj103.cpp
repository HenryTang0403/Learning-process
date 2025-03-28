#include<iostream>
using namespace std;
int main(){
    string a,b;
    long long c,d;
    cin>>a>>c>>b>>d;
    if(a==b&&c==d){
        cout<<"GOOD";
    }
    else if (a==b||c==d)
    {
        cout<<"=~=";
    }
    else{
        cout<<"OTZ";
    }
}