#include<iostream>
using namespace std;
int palin(char ch[],int len){
  int s,e;
s=0;
e=len-1;
while(s<=e)
{
    if(ch[s]!=ch[e])
   {
      return 0;
   }
        s++;
        e--;
}
return 1;
}
int main()
{   char ch[20];
int len=0,pali;
    cin>>ch;
    for(int i=0;ch[i]!='\0';i++)
    {
       len++;
    }
  cout<<len<<endl;
pali=palin(ch,len);
if(pali==0)
cout<<"not palindome"<<endl;
else
  cout<<"paindome"<<endl; 
}