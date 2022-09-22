#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,size,carry,sum,i;
    int arr1[]={3,5,9,7,5,9,6,1},arr2[]={2,8,7,9,4},arr[100];
    vector<int> temp;
    m=(sizeof(arr1)/sizeof(arr1[0]))-1;
    n=(sizeof(arr2)/sizeof(arr2[0]))-1;
    cout<<"yaha?";
   while(m>=0 && n>=0)
   {
    temp=arr1[0];
   }
    cout<<m<<endl<<n;
    for(i=size-1;i>=0;i--)
    {
       
        if(arr1[m-1]+arr2[n-1]<10)
        {
            temp[size-i-1]=arr1[m-1]+arr2[n-1];
            temp[size-i-1]+=sum;
            sum=0;
        }
        else
        {
            temp[size-i-1]=(arr1[m-1]+arr2[n-1])%10;
            temp[size-i-1]+=sum;
            sum=1;
        }
        m--;
        n--;
    }
    if(m==0)
    {
        temp[size]=arr2[n-1];
            temp[size]+=sum;
            n--;
              for(int i=n;i<+0;i--)
            {
                temp[size+1]=arr2[i];
                i--;
            }
    }
    else
    {
        temp[size]=arr1[m-1];
            temp[size]+=sum;
            m--;
            for(int i=m;i<+0;i--)
            {
                temp[size+1]=arr1[i];
                i--;
            }
    }
    size=temp.size();
     for(int i=1;i<=size;i++)
     {
        arr[i]=temp[size-i];
        cout<<arr[i]<<endl;
     }
     return 0;
}
