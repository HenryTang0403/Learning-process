#include<iostream>
using namespace std;
int main(){
    int s,p[12],n[12],t=1;
    while(cin>>s){
        if(s==-1)break;
        for(int i=0;i<12;i++)cin>>p[i];
        for(int i=0;i<12;i++)cin>>n[i];
        cout<<"Case "<<t++<<":\n";
        for(int i=0;i<12;i++){
            if(s>=n[i]){
                cout<<"No problem! :D\n";
                s-=n[i];
                s+=p[i];
            }
            else {
                cout<<"No problem. :(\n";
                s+=p[i];
            }
        }
    }
}