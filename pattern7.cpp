#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    i=n;
    while(i>0)
    {
        for(j=0;j<i;j++)
        {
            cout<<"* ";
        }
        i--;
        cout<<endl;
    }
}