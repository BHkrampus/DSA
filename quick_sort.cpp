#include<iostream>
using namespace std;
int part(int *arr,int s,int e)
{
    int count=0;
  int pivot=arr[s];
  for(int i=s+1;i<=e;i++)
    {
       if(arr[i]<=pivot)
           count++;
    }
    int pivotidx=s+count;
    swap(arr[s],arr[pivotidx]);
    int i=s;
    int j=e;
    while(i<pivotidx && j>pivotidx)
    {
        while(arr[i]<=pivot)
            i++;
        while(arr[j]>=pivot)
             j--;
        if(i<pivotidx && j>pivotidx)
        swap(arr[i++],arr[j--]);
            
    }
return pivotidx;
}
void quicksort(int *arr,int s,int e)
{
    if(s>=e)
        {
         return;
        }
    int p=part(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}



int main()
{
  int arr[]={6,-6, -2, -4, -6, 2, -6};
  int size=sizeof(arr)/sizeof(arr[0]);

 quicksort(arr,0,size-1);
  for(int i=0;i<size;i++)
  cout<<arr[i]<<"  ";
  return 0;
}