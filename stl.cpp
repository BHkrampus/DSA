#include<iostream>
#include<array>
#include<vector>
#include<deque>
using namespace std;
int main()
{
     array<int,9> a={20,53,53,656,83,65,23,};
    cout<<a.size()<<endl;
    cout<<a.at(5)<<endl;
//vector..........
vector<int> v;
v.push_back(69);
cout<<v.at(0)<<endl;
cout<<v.size()<<endl;


//deque...........-----------
deque<int> d;
d.push_back(59);
d.push_front(68);
cout<<d.empty();
cout<<endl<<d.at(0)<<endl<<d.at(1)<<endl;

}
