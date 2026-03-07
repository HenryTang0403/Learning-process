#include<iostream>
using namespace std;
int main(){
    int t,vi[11],max,c=1;
    string web[11];
    cin>>t;
    for(int i=0;i<t;i++){
        for(int j=1;j<=10;j++){
            cin>>web[j]>>vi[j];
        }
        max=0;
        for(int j=1;j<=10;j++){
            if(vi[j]>max)max=vi[j];
        }
        cout<<"Case #"<<c++<<":\n";
        for(int j=1;j<=10;j++){
            if(vi[j]==max)cout<<web[j]<<"\n";
        }
    }
}