#include<iostream>
using namespace std;
   
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
           cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
           cout<<j+1;
        }
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}