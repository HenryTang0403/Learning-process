#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int f,s,a[n];
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        cin>>f;
        for(int i=1;i<n;i++){
            cin>>s;
            a[abs(f-s)]++;
            f=s;
        }
        bool ans=false;
        for(int i=1;i<n;i++){
            if(!a[i]){
                ans=true;
                break;
            }
        }
        if(ans)cout<<"Not jolly\n";
        else cout<<"Jolly\n";
    }
}