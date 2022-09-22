#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            ch= 'A' +n-i+j;
            cout<<ch<<" ";    
        }
        cout<<endl;
    }
    return 0;
}