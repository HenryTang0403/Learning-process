#include<iostream>
using namespace std;
int main(){
    int n,a,f;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>f;
        for(int j=1;j<=f;j++){
            for(int k=1;k<=a;k++){
                for(int l=1;l<=k;l++){
                    cout<<k;
                }
                cout<<"\n";
            }
            for(int k=a-1;k>=1;k--){
                for(int l=1;l<=k;l++){
                    cout<<k;
                }
                cout<<"\n";
            }
        }
    }
}