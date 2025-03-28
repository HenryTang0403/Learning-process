#include<iostream>
using namespace std;
int line[100000];
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++) cin>>line[i];
    for(int i=0;i<a;i++){//棵數
        for(int j=1;j<line[i]-2;j++){//頭
            for(int k=line[i]-j;k>=1;k--) cout<<" ";
            for(int k=j*2-1;k>=1;k--) cout<<"*";
            cout<<"\n";
        }
        //中段
        for(int j=1;j<line[i]*2;j++) cout<<"*";
        cout<<"\n"<<" ";
        for(int j=3;j<line[i]*2;j++) cout<<"*";
        cout<<"\n";
        for(int j=1;j<line[i]*2;j++) cout<<"*";
        cout<<"\n";
        //後段
        for(int j=line[i]-3;j>=1;j--){//頭
            for(int k=line[i]-j;k>=1;k--) cout<<" ";
            for(int k=j*2-1;k>=1;k--) cout<<"*";
            cout<<"\n";
        }
    }
}