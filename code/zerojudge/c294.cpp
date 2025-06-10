#include<bits/stdc++.h>
using namespace std;
int arr[3];
int main(){
    for(int i=0;i<3;i++)cin>>arr[i];
    sort(arr,arr+3);
    for(int i=0;i<3;i++)cout<<arr[i]<<" ";
    cout<<"\n";
    if(arr[0]+arr[1]<=arr[2])cout<<"No";
    else if(arr[0]*arr[0]+arr[1]*arr[1]<arr[2]*arr[2])cout<<"Obtuse";
    else if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])cout<<"Right";
    else if(arr[0]*arr[0]+arr[1]*arr[1]>arr[2]*arr[2])cout<<"Acute";
}