#include<iostream>
using namespace std;
int insertion(int arr[],int n)
{  
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
        while(arr[j]>arr[j+1] || arr[j]<arr[j-1])
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else if(arr[j]<arr[j-1])
            {
                int temp=arr[j];
                 arr[j]=arr[j-1];
                 arr[j-1]=temp;
            }
        }

        }
    }
    // display..
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
    insertion(arr,size);
    return 0;
}