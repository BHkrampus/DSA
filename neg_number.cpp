#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,bit,byte=0;
    cin>>n;
    n=n*(-1);
    while(i<32)
    {
    bit=n&1;
    if(bit==1)
    bit=0;
    else
    bit=1;
    n=n<<1;
    byte+=bit*pow(10,i);
    i++;
    }
    byte++;
    byte++;
    cout<<byte;
}