#include<iostream>
using namespace std;
int value(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    sum=((n*(n-1))/2)-sum;
    return sum;
}
int main()
{
int arr[100],n,sum;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sum= value(arr,n);
cout<<"value is"<<sum;
}