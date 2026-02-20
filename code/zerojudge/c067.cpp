#include<iostream>
using namespace std;
int main(){
    int n,avg,a[51],ans,t=0;
    cin>>n;
    while(n!=0){
        avg=0;
        ans=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            avg+=a[i];
        }
        avg=(avg/n);
        for(int i=1;i<=n;i++){
            if(a[i]<avg){
                ans+=(avg-a[i]);
            }
        }
        t++;
        cout<<"Set #"<<t<<"\nThe minimum number of moves is "<<ans<<".\n";
        cin>>n;
    }
}