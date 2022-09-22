#include<iostream>
using namespace std;
void mergesort(int *arr,int s,int e)
{
  int mid=s+(e-s)/2;
  int len1=mid-s+1;
  int len2=e-mid;

  int *left=new int[len1];
  int *right=new int[len2];

  int z=s;
  for(int i=0;i<len1;i++)
  left[i]=arr[z++];

   z=mid+1;
  for(int j=0;j<len2;j++)
  right[j]=arr[z++];

   int idx1=0;
   int idx2=0;
   z=s;
  while(idx1<len1 && idx2<len2){
       if(left[idx1]<right[idx2])
         arr[z++]=left[idx1++];
       else
       arr[z++]=right[idx2++];
  }
  while(idx1 < len1)
  arr[z++]=left[idx1++];
  while(idx2<len2)
  arr[z++]=right[idx2++];
delete []left;
delete []right;

}
void merge(int *arr,int s,int e)
{
    if(s>=e){
  return;
    }
    int mid=s+(e-s)/2;
    merge(arr,s,mid);
    merge(arr,mid+1,e);
     
    mergesort(arr,s,e);


}



int main()
{
  int arr[18]={34,6,7,34,67,43,32,789,67,543,23,56,478,1,7,4,323,392};
  int size=sizeof(arr)/sizeof(arr[0]);

  merge(arr,0,size-1);
  for(int i=0;i<size;i++)
  cout<<arr[i]<<"  ";
  return 0;


}