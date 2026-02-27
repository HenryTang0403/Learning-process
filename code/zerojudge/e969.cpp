#include<iostream>
using namespace std;
int n,m,t=0;
bool k,f;
int main(){
    cin>>n>>m>>k;
    while(1){
        if(k){
            if((!f)&n<55){
                cout<<"Wayne can't eat and drink.";
                break;
            }
            else if(n<55)break;
            else if(n==55){
                cout<<t<<": Wayne drinks a Corn soup, and now he doesn't have money.";
                break;
            }
            else{
                n-=55;
                cout<<t<<": Wayne drinks a Corn soup, and now he has "<<n;
                if(n==1)cout<<" dollar.\n";
                else cout<<" dollars.\n";
                t+=m;
                f=1;
                k=0;
            }
        }
        else{
            if((!f)&n<32){
                cout<<"Wayne can't eat and drink.";
                break;
            }
            else if(n<32)break;
            else if(n==32){
                cout<<t<<": Wayne eats an Apple pie, and now he doesn't have money.";
                break;
            }
            else{
                n-=32;
                cout<<t<<": Wayne eats an Apple pie, and now he has "<<n;
                if(n==1)cout<<" dollar.\n";
                else cout<<" dollars.\n";
                t+=m;
                f=1;
                k=1;
            }
        }
    }
}