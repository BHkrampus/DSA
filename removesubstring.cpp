#include<iostream>
using namespace std;
int removestring(string s,string ss)
{
   while(s.length()!=0 && s.find(ss) < s.length())
   {
       s.erase(s.find(ss),ss.length());
   }
   for(int i=0;i<s.length();i++)
   {
    cout<<s[i];
   }
   return 0;
}
int main()
{
    string str;
    string substr;
    getline(cin,str);
    getline(cin,substr);
    removestring(str,substr);
    return 0;
}