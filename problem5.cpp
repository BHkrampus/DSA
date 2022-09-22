#include<iostream>
using namespace std;
int pivot(int arr[], int size)
{
    int s=0,e=size-1,fsum=0,rsum=0;
    int mid=(s+e)/2;

 while(s<mid){
    fsum+=arr[s];
    s++;
     cout<<s<<" f "<<fsum<<endl;
 }
 while(e>mid){
    rsum+=arr[e];
    e--;
    cout<<e<<" r "<<rsum<<endl;
 }

 s--;
 e++;
 cout<<s<<" f "<<fsum<<endl;
 cout<<e<<" r "<<rsum<<endl;
 cout<<"mid:"<<mid<<endl;
while(fsum!=rsum){
    if(fsum>rsum)
    {
        rsum+=arr[mid];
        fsum-=arr[s];
        mid--;
        e--;
        s--;
cout<<e<<" r "<<rsum<<endl;
cout<<s<<" f "<<fsum<<endl;
    }
    else
    {
        fsum+=arr[mid];
        rsum-=arr[e];
        mid++;
        s++;
        e++;
        cout<<s<<" f "<<fsum<<endl;
        cout<<e<<" r "<<rsum<<endl;
    }
}
cout<<s<<" f "<<fsum<<endl;
        cout<<e<<" r "<<rsum<<endl;
  return mid;
}

int main(){
    int mid,size,result;
    int arr[]={7,5,4,8,3,5,2,1,2,3};
    size= sizeof(arr)/sizeof(arr[0]);
   
   result=pivot(arr,size);  
  
cout<<endl<<result<<"\t"<<arr[result];
   
return 0;
}