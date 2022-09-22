#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{ 
    for(int i=0;i<n;i+=2)
    {  
       if(i+1<n)
       {
        arr[i]+=arr[i+1];
        arr[i+1]=arr[i]-arr[i+1];
        arr[i]-=arr[i+1];
       }
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