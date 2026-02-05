#include<iostream>
using namespace std;
int main(){
    int n,arr[4];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++)cin>>arr[j];
        if((arr[2]-arr[1])==(arr[3]-arr[2])){
            for(int j=0;j<4;j++)cout<<arr[j]<<" ";
            cout<<arr[3]+(arr[2]-arr[1])<<"\n";
        }
        else{
            for(int j=0;j<4;j++)cout<<arr[j]<<" ";
            cout<<arr[3]*(arr[2]/arr[1])<<"\n";
        }
    }
}