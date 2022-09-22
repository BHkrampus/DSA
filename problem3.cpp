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
    int arr[]={1,3,4,5,7,8,34,56,78,86,86,86,86,86,89,98};
    size= sizeof(arr)/sizeof(arr[0]);
   cout<<"enter item to be searched"<<endl;
   cin>>item;
   result=bsearch(arr,size,item);       
   if(result==-1)
  cout<<"leftmost occurence:"<<result<<endl<<"rightmost occurence:"<<result<<endl;
   else{
    int i=result,j=result;
    while(arr[i]==item){
        i--;
    }
    while(arr[j]==item){
        j++;
    }
    cout<<"leftmost occurence:"<<i+1<<endl<<"rightmost occurence:"<<j-1<<endl;
   }

return 0;
}