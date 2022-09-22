#include<iostream>
using namespace std;
int selsort(int arr[],int n)
{  
    for(int i=0;i<n-1;i++)
    {
      int small=i;
      for(int j=i+1;j<n;j++)
      {
         if(arr[small]>arr[j])
         {
            small=j;
         }
      }
      swap(arr[small],arr[i]);
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
    selsort(arr,size);
    return 0;
}