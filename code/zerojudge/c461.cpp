#include<bits/stdc++.h>
using namespace std;
int main(){
    int ia,ib,ic;
    cin>>ia>>ib>>ic;
    bool a,b,c;
    a=!(ia==0);
    b=!(ib==0);
    c=!(ic==0);
    if((a&b)==c)cout<<"AND\n";
    if((a|b)==c)cout<<"OR\n";
    if((a^b)==c)cout<<"XOR\n";
    if(!(((a&b))==c|((a|b)==c)|(a^b==c)))cout<<"IMPOSSIBLE\n";
}