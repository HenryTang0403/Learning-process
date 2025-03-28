#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int n;
queue<int> q;//main
vector<int> s;//delete
int main(){
    while(cin>>n){
        if(n==0)break;
        while(!q.empty()) q.pop();
        s.clear();
        for(int i=1;i<=n;i++) q.push(i);
        while(q.size()>1){
            s.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout<<"Discarded cards: ";
        for(int i=0;i<s.size();i++){
            if(i!=0)cout<<", ";
            cout<<s[i];
        }
        cout<<"\n";
        cout<<"Remaining card: "<<q.front()<<"\n";
    }
}