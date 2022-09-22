#include<iostream>
using namespace std;
void fabo(int f,int s,int n)
{   
    if(n<2)
        return;
    
   
    int res=f+s;
    f=s;
    s=res;
    n--;
    cout<<res<<" ";
    fabo(f,s,n);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<"0 "<<"1 ";

  fabo(0,1,n);
}