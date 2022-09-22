#include<iostream>
#include<vector>
using namespace std;
int main()
{int mini;
    vector<int> v1;
    vector<int> v2;
    vector<int> v;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(9);
    v1.push_back(34);
    v1.push_back(56);
    v1.push_back(76);
    v2.push_back(3);
    v2.push_back(5);
    v2.push_back(47);
    v2.push_back(67);
    v2.push_back(98);
mini = v1.size() + v2.size();
cout<<mini<<endl;
int s1=0,s2=0;
for(int i=0;i<=mini-1;i++)
{
if(s1<=v1.size()-1 && s2<=v2.size()-1)
{

    if(v1[s1]<v2[s2])
    {
v.push_back(v1[s1]);
s1++;
    }
   else
    {
v.push_back(v2[s2]);
s2++;
    }
}
else if(s1>v1.size()-1)
{
    v.push_back(v2[s2]);
s2++;
}
else
{
    v.push_back(v1[s1]);
s1++;
}
    cout<<v[i]<<"  ";
    
}

 return 0;
}