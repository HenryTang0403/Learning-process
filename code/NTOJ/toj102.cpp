#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b;
    char d;
    cin>>a>>d>>b;
    cout<<fixed<<setprecision(4);
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
            cout<<a<<" / "<<b<<" = "<<a/b;
        }
    }
}