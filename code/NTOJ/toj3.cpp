#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    while(t--){
        cin>>a>>b;
        int c;
        while(b){//輾轉相除法
            c=a%b;
            a=b;
            b=c;
        }
        cout<<a<<"\n";
    }
}