#include<iostream>
using namespace std;
int main(){
   int arr[100],n,ans=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans;
    
}
