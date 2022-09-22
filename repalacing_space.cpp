#include<iostream>
using namespace std;
int replacespace(string s)
{string str;
    for(int i=0;i<s.length();i++)
    {   
       if(s[i]==' ')
       {
        str.push_back('%');
        str.push_back('4');
        str.push_back('0');
       }
       else
       str.push_back(s[i]);
     
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }


}

int main()
{
    string s;
    getline(cin,s);
    replacespace(s);
    return 0;
}