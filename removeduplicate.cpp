#include <iostream>
#include<vector>
using namespace std;
int compress(string s) {
        int i=0,j=0;
        while(i<s.length())
        {   int count=1;
      
            while(s[j]==s[j+1] && j<s.length())
            {
                count++;
                cout<<"while "<<count<<endl;
                j++;
            }

            if(count==1)
            {
                s[i] = s[j];
                j++;
            }
           
            else
           {
                s[i] = s[j];
                s[i+1]=count;
           } 

           if(j>=s.length())
           {
                s.erase(i+1,s.length()-1);
           }
            
            i++;
            
        }
        for(int i=0;i<s.length();i++)
        cout<<s[i];
return 0;
    }


int main()
{
    string s;
    getline(cin, s);
    compress(s);
    return 0;
}