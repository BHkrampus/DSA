#include<iostream>
using namespace std;
int bsearch(int arr[], int size)
{
    int s=0,e=size-1;
    int mid=(s+e)/2;
  while(s<=e)
  {
    mid=s+(e-s)/2;
    if(arr[mid]>=arr[mid+1])
     {
        e=mid;
        return e;
     }
     else{
        s=mid;
     }
     
  }
  return s;
}

int main(){
    int mid,size,front=0,rear,item,result;
    int arr[]={1,3,5,7,9,12,25,43,53,54,56,67,64,54,45,34,32,23,21,12,8,5,3};
    size= sizeof(arr)/sizeof(arr[0]);
    cout<<"chala gaya yaha se to"<<endl;
   result=bsearch(arr,size);       
   cout<<"peak value is at the index:"<<result<<"\t that is : "<<arr[result];
return 0;
}