#include<iostream>
using namespace std;
int n;
void hanoi(int n,char from,char to,char mid){
    if(n==1){
        cout<<"Move ring "<<n<<" from "<<from<<" to "<<to<<"\n";
        return;
    }
    hanoi(n-1,from,mid,to);
    cout<<"Move ring "<<n<<" from "<<from<<" to "<<to<<"\n";
    hanoi(n-1,mid,to,from);
}
int main(){
    while(cin>>n){
        hanoi(n,'A','C','B');
        cout<<'\n';
    }
}