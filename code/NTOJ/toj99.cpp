#include<iostream>
using namespace std;
double a,b,c,d;
double eps=1e-7;
int main(){
    cin>>a>>b>>c>>d;
    double det=a*d-b*c;
    if (det<eps&&det>-eps){
        cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
    
}