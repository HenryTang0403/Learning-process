#include<iostream>
using namespace std;
int main(){
    double a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>g>>e;
    f=((a*1.25+b*2+c)/(15*4.25)*20)+(d+g)*0.4;
    if(f>=e){
        cout<<"YA";
    }
    else{
        cout<<"QQ";
    }
}