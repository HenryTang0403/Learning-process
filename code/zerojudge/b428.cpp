#include<iostream>
using namespace std;
int main(){
    string c,p;
    int k;
    while(cin>>c>>p){
        k=p[0]-c[0];
        if(k<0)k+=26;
        cout<<k<<"\n";
    }
}