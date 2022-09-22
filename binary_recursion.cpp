#include<iostream>
using namespace std;

int bsearch(int *arr,int s,int e,int key){
    
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(key>arr[mid])
    {
         bool item=bsearch(arr,mid+1,e,key);
         return item;
    }
    else{
       bool item=bsearch(arr,s,mid-1,key);
         return item;
    }
   
    
  
}

int main()
{    
     int size=7;
    int s=0;
    int e=size-1;
   int key=21;
  
   int arr[]={1,3,6,10,11,21,23,29};
   bool ans=bsearch(arr,s,e,key);
   if(ans)
   cout<<"found";
   else
   cout<<"not found";
    return 0;

}