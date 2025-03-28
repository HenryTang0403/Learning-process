#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    for(int i=1;i<=30;i++){
        b+=i;
        a+=1+i+b*i;
    }
    cout<<a;
}