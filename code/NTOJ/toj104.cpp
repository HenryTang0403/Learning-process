#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        for(int j=0;j<a-i-1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
}