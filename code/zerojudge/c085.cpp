#include<iostream>
using namespace std;
int main(){
    int Z,I,M,L,c=1;
    while(cin>>Z>>I>>M>>L){
        if(Z+I+M+L==0)break;
        int a[M];
        for(int i=0;i<M;i++)a[i]=0;
        int t=1;
        while(!a[L]){
            a[L]=t;
            L=(Z*L+I)%M;
            t++;
        }
        cout<<"Case "<<c++<<": "<<t-a[L]<<"\n";
    }
}