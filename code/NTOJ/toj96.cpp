#include<iostream>
using namespace std;
int main(){
    int a,b;
    char d;
    cin>>a>>d>>b;
    if(d=='+'){
        cout<<a<<" + "<<b<<" = "<<a+b;
    }
    else if (d=='-')
    {
        cout<<a<<" - "<<b<<" = "<<a-b;
    }
    else if (d=='*')
    {
        cout<<a<<" * "<<b<<" = "<<a*b;
    }
    else{
        if(b==0){
            cout<<"ERROR";
        }
        else{
            cout<<a<<" / "<<b<<" = "<<a/b<<" ... "<<a%b;
        }
    }
}