#include<iostream>
using namespace std;
int n,arr[200010],t;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    bool d=1;
    for(int i=0,a,b;i<t;i++){
        cin>>a>>b;
        if(abs(a-b)>8){
            cout<<"I QUIT!\n";
            for(int j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
            cout<<"\n";
            d=0;
            break;
        }
        swap(arr[a-1],arr[b-1]);
    }
    if(d){
        cout<<"SORTED!\n";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    
}