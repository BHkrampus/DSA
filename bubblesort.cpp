#include<iostream>
using namespace std;
int bubble(int arr[],int n)
{ 
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"  ";
  }
  return 0;
}
int main()
{
    int arr[]={12,2,4,32,56,43,65,78,543,34,90,87,32,1,0,-32};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
    return 0;
}