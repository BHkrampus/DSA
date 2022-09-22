#include<iostream>
using namespace std;
bool possible(int arr,int n,int mid)
{
    int sum,stucount;
    sum=0;
    stucount=1;
    for(int i=0;i<n;i++)
    {
    if(sum + arr[i]<=mid)
    {
        sum+=arr[i];
    }
    else
    {
      stucount++;

    }
    }
    return false;
}


int book(int arr[],int n)
{
int s,e,mid,sum,ans;
s=0;
e=n-1;
sum=0;
mid=s+(e-s)/2;

while(s<e)
{
   if(ans)
   {

   }
}
}

int main()
{
int size,ans1,ans2;
int arr[10,20,30,40,50];
size = sizeof(arr)/sizeof(arr[0]);
ans2=book(arr,size);
cout<<ans2<<endl;
}