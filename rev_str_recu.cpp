#include<iostream>
#include<string>
using namespace std;

void reverse(string& str,int i){
    if(i>(str.length()-1-i))
    return;
    swap(str[i],str[(str.length()-1-i)]);
    i++;
    reverse(str,i);
}

int main()
{    
   string str="abcdef";

    
   reverse(str,0);
    cout<<endl<<str<<endl;
    return 0;

}