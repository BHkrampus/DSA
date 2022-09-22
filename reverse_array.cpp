#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    for(int i=0;i<(n/2);i++)
    {
        arr[i]+=arr[n-i-1];
        arr[n-i-1]=arr[i]-arr[n-i-1];
        arr[i]-=arr[n-i-1];
    }
    
}

int main(){
    int arr[100],n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(arr,n);
    cout<<"revered array is :"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}