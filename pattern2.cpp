#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter no of rows";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}