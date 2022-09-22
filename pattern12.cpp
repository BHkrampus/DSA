#include<iostream>
using namespace std;
   
int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           cout<<j;
        }
        for(j=0;j<i;j++)
        {
           cout<<"**";
        }
        for(j=n-i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}