#include<iostream>
using namespace std;
int h1,m1,h2,m2;
int main(){
    cin>>h1>>m1>>h2>>m2;
    while(h1|h2|m1|m2){
        if(h2>h1)cout<<(h2-h1)*60+m2-m1<<"\n";
        else if(h2==h1){
            if(m2>=m1)cout<<m2-m1<<"\n";
            else cout<<60*24-m1+m2<<"\n";
        }
        else cout<<(24-h1+h2)*60+m2-m1<<"\n";
        cin>>h1>>m1>>h2>>m2;
    }
}