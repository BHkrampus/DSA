#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0)
    return 0;

    a=a*a;

    power(a,b--);
    return a;
  
}

int main()
{    
   int a,b;
   cin>>a>>b;
   int ans=power(a,b);
   cout<<ans;
    return 0;

}