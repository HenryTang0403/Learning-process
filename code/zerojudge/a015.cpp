#include<iostream>
using namespace std;
int a[101][101],r,c;
int main(){
    while(cin>>r>>c){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                cout<<a[j][i]<<" ";
            }
            cout<<"\n";
        }
    }
    
}