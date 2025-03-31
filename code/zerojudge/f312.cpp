#include<iostream>
using namespace std;
int main(){
    int a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    int n;
    cin>>n;
    int a=(a1*0*0+b1*0+c1)+(a2*(n-0)*(n-0)+b2*(n-0)+c2);
    for(int i=0;i<=n;i++){
        if(a<=(a1*i*i+b1*i+c1)+(a2*(n-i)*(n-i)+b2*(n-i)+c2)) {
            a=(a1*i*i+b1*i+c1)+(a2*(n-i)*(n-i)+b2*(n-i)+c2);
        }
    }
    cout<<a;
}