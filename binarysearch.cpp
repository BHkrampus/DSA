#include<iostream>
using namespace std;
int bsearch(int arr[], int size, int item)
{
    int s=0,e=size-1;
    int mid=(s+e)/2;
  while(s<=e)
  {
    mid=s+(e-s)/2;
    if(arr[mid]==item){

    return mid;
    }
    else if(item<=arr[mid]){

        e=mid-1;
    }
    else if(item>=arr[mid]){
        s=mid+1;
    }
  }
  return -1;
}

int main(){
    int mid,size,front=0,rear,item,result;
    int arr[]={1,3,5,7,9,12,25,43,53,54,56,67,78,89,123,345,567,678};
    size= sizeof(arr)/sizeof(arr[0]);
   cout<<"enter item to be searched"<<endl;
   cin>>item;
   result=bsearch(arr,size,item);       
   if(result==-1)
   cout<<"item not found"<<endl;
   else{
    cout<<"item found at"<<result<<endl;
   }
return 0;
}