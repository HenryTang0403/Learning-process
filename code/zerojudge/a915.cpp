#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
    bool operator<(point b){
        if(x != b.x)return x<b.x;
        else return y<b.y;
    }
};
point arr[1000];
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i].x>>arr[i].y;
    }
    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<"\n";
    }
}