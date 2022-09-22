#include<iostream>
using namespace std;
int replacespace(string s)
{
    for(int i=0;i<s.length();i++)
    {   
       if(s[i]==' ')
        s.replace(i,1,"%40"); 
    }
    for(int i=0;i<s.length();i++)
        cout<<s[i];
}
int main()
{
    string s;
    getline(cin,s);
    replacespace(s);
    return 0;
}