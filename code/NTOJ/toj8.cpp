#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    while(cin>>n){
        cin.ignore();
        getline(cin,s);
        int x=s.size()/n;
        for(int i=0;i<n;i++){
            for(int j=0;j<x;j++){
                cout<<s[i+j*n];
            }
        }
        cout<<"\n";
    }
}