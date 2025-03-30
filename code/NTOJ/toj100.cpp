#include<iostream>
using namespace std;
char c;
int main(){
    cin>>c;
    if(c=='A'){
        cout<<"@";
    }
    else{
        c--;
        cout<<c;
    }
}