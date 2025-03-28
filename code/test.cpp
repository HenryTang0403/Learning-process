// ZJ a104 selection sort
#include<bits/stdc++.h>
using namespace std;

int n, arr[1005];

int main(){
	while(cin >> n){
		for(int i=1;i<=n;i++) cin >> arr[i];
		for(int i=1;i<=n;i++){
			int mn = arr[i], id = i;
			for(int j=i+1;j<=n;j++){
				if(arr[j] < mn) id = j, mn = arr[j];
			}
			swap(arr[i], arr[id]);
		}
		for(int i=1;i<=n;i++){
			cout << arr[i];
			if(i < n) cout<<" ";
			else cout<<'\n';
		}
	}
}