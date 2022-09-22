#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i=0;
    cout<<"enter size"<<endl;
    cin>>n;
    while(i<n){
       cin>>arr[i];
       i++;
    }
    sort(arr,arr+n);
for(i=0;i<n;i++){
    // cout<<arr[i];
    if(arr[i]==arr[i+1])
       cout<<arr[i];
    }
}