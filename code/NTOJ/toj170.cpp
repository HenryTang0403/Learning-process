#include<iostream>
using namespace std;
void a(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
    cout<<"\n";
}
void b(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
    cout<<"\n";
}
void c(int n){
    for(int i=1;i<=n;i++){
        for (int j=0;j<i;j++){
            for(int k=0;k<n-j-1;k++) cout<<" ";
            for(int k=0;k<j*2+1;k++) cout<<"*";
            cout<<"\n";
        }
    }
    cout<<"\n";
}
void d(int n){
    n*=10;
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
    cout<<"\n";
}
void e(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++) cout<<" ";
        for(int j=0;j<i*2+1;j++) cout<<"*";
        cout<<"\n";
    }
    for(int i=0;i<n*2+3;i++)cout<<"#";
    cout<<"\n";
    cout<<"\n";
}
int main(){
    int j;
    cin>>j;
    for(int i=1;i<=j;i++){
        char l;
        int n;
        cin>>l>>n;
        if(l=='A')a(n);
        else if(l=='B')b(n);
        else if(l=='C')c(n);
        else if(l=='D')d(n);
        else if(l=='E')e(n);
        else if(l=='F')a(n*2);
        else if(l=='G')a(n*3);
        else if(l=='H')a(n*7);
        else if(l=='I')a(4*n-1);
    }
    cout<<"\n";
}
