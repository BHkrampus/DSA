#include<iostream>
using namespace std;
int main()
{
 char ch='A';
 int i,j,n;
 cin>>n;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
         cout<<ch<<" ";
         
     }
     ch++;
     cout<<endl;
 }
 return 0;
}