#include<bits/stdc++.h>
using namespace std;
struct cat{
    int rank,age;
    string name;
    bool operator<(cat b){
        if(rank!=b.rank)return rank<b.rank;
        else if(age!=b.age){
            if(rank==5)return age<b.age;
            else return age>b.age;
        }
        else return name<b.name;
    }
};
int m,n;
cat arr[10010];
string ord=" enkwamdl";
int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    while(cin>>n>>m){
        for(int i=1,age;i<=n;i++){
            string name,work;
            cin>>name>>work>>age;
            for(int j=1;j<=8;j++){
                if(ord[j]==work[0]){
                arr[i]={j,age,name};
                break;
                }
            }
        }
        sort(arr+1,arr+1+n);
        if (m>n) m=n;
        for (int i=1;i<=m;i++){
            cout<<arr[i].name<<endl;
        }
    }
}