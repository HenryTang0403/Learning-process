#include<bits/stdc++.h>
using namespace std;
string s;
int a,b;
int main(){
    cin>>s;
    for(int i=s.size()-1;i>=0;i-=2){
        a+=s[i]-'0';
    }
    for(int i=s.size()-2;i>=0;i-=2){
        b+=s[i]-'0';
    }
    cout<<abs(a-b);
}