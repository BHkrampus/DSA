#include<iostream>
using namespace std;
bool search(int *arr,int size,int target){
    
    if(*arr!=target && size==0)
    return false;
     
     if(arr[0]==target)
     return true;
     else{

    bool item=search(arr+1,size-1,target);
    return item;
     }
   
    
}
int main()
{    
    int arr[]={2,4,6,4,7,3,8,4};
    int target=7;
    int res = search(arr,8,target);
    if(res)
    cout<<"item found";
    else
    cout<<"not found";
    return 0;

}