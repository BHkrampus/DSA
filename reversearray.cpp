#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m,e;
    vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(11);
    v.push_back(21);
    v.push_back(23);
    v.push_back(29);
    cout<<"enter the startign value"<<endl;
    cin>>m;
   e=v.size()-1;
   while(m<e)
   {
      swap(v.at(m),v.at(e)); 
m++;
e--;
   }
   for(int i=0;i<=v.size();i++)
   {
      cout<<v.at(i)<<"  ";
   }
   return 0;
}