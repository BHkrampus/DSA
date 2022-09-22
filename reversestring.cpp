#include<iostream>
using namespace std;
int reverse(string s)
{
   int st=0,e=0;
   for(int i=0;i<=s.length();i++)
   {
    if(s[i]==' ' || i == s.length())
    { 
        // cout<<"chl";
        e=i-1;
        while (st<e)
        {
            // cout<<"tu ho ri h?";
            swap(s[st],s[e]);
            st++;
            e--;
        }
        st=i+1;
    }
   }
for(int i=0;i<s.length();i++)
{
    // cout<<"hua";
    cout<<s[i];
}
return 0;
}
int main()
{
    string s;
    getline(cin,s);
    reverse(s);
    return 0;
}