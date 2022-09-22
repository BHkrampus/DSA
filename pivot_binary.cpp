#include<iostream>
using namespace std;
int pivot(int n,int arr[])
{
int s,e,mid;
s=0;
e=n-1;
mid=s+(e-s)/2;
cout<<mid<<endl;
while(s<e)
{mid=s+(e-s)/2;
    if(arr[0]<=arr[mid])
    {
        s=mid+1;
    }
    else if(arr[e]>arr[mid])
    {
        e=mid;
    }
}
    return s;
}
int main()
{
    int size,ans;
    int arr[]={2,3,4,5,6,7,8,1};
    size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    ans=pivot(size,arr);
    cout<<"pivot element is:"<<arr[ans]<<endl;
    return 0;
}
