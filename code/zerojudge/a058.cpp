#include<iostream>
using namespace std;
int n,a,a1,a2,a3;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        switch(a%3){
        case 0:
        a1++;
        break;
        case 1:
        a2++;
        break;
        case 2:
        a3++;
        break;
        }
    }
    cout<<a1<<" "<<a2<<" "<<a3;
}