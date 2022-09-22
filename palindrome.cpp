#include <iostream>
using namespace std;

//valid or not
bool valid(char ch)
{
    if('0'<=ch<='9' || 'A'<=ch<='Z' || 'a'<=ch<='z')
    {
        return 1;
    }
    return 0;
}

//lower case
char lowercase(char ch)
{
     if('0'<=ch<='9' || 'a'<=ch<='z')
       {
           return ch;
       }
       else
       return(ch+'a'-'A');
      
}

// palindrome function
int palin(char ch[],int len){
  int s,e;
s=0;
e=len-1;
string str;
for(int i=0;i<=e;i++)
{
    if(valid(ch[i]))
    {
        str.push_back(ch[i]);
    }
}
    e=str.size()-1;
for(int i=0;i<=e;i++)
{
     str[i]=lowercase(str[i]);
     cout<<str[i];
}
while(s<e)
{
    if(str[s]!=str[e])
    {
        return 0;
    }
        s++;
        e--;
}
return 1;

}

// main function
int main()
{
    char ch[20];
    int len = 0, pali;
    cin >> ch;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    pali = palin(ch, len);
    if (pali == 0)
        cout << "not palindome" << endl;
    else
        cout << "paindome" << endl;
}