#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,0,3,1,0,0,0},count=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
       if(arr[i]!=0)
       {
          swap(arr[count],arr[i]);
          count++;
       }
    }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
     }
    return 0;
}