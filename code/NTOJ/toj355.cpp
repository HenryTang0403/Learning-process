#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    /*1.ios::sync_with_stdio(0)：關閉 C++ 的 IO 與 C 的 IO（像 scanf/printf）之間的同步，以提升效能。
    2.cin.tie(0)：解除 cin 與 cout 的綁定，讓輸入時不會強制先 flush 輸出，也會提高效能。
    但不能再混用scanf/printf*/
    int n,k;
    cin>>n>>k;
    int max=0,sec=0;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        if(x>max){
            sec=max;
            max=x;
        }
        else if (x>sec){
            sec=x;
        }
    }
    cout<<sec;
}