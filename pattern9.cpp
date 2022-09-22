#include<iostream>
using namespace std;
int main()
{
    int i,j,n,count=1;
    cin>>n;
    i=n;
    while(i>0)
    { 
  
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        
           for(j=i;j<=n;j++)
     {
         cout<<count;
     }
        i--;
        count++;
        cout<<endl;
    }
}