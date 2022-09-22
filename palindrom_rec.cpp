#include<iostream>
#include<string>
using namespace std;

bool palindrome(string& str,int i,int j){
    if(i>j)
   return true;
    
    if(str[i]!=str[j])
   return false;
     else
    {
      i++; 
      j--;
     return palindrome(str,i,j);
    }

}

int main()
{    
   string str="abccba";

    
   bool ans=palindrome(str,0,str.length()-1);
    cout<<endl<<str<<endl;
    if(ans)
      cout<<"yes";
      else
      cout<<"no";
    return 0;

}