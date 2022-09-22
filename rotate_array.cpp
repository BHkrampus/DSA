#include<iostream>
#include<vector>
using namespace std;
int main()
{  cout<<"done yet 0"<<endl;
      vector<int> v;
    int arr[]={3,4,6,5,3,6,42,7,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
      vector<int> temp(n);
    cout<<"done yet 1"<<endl;
    for(int i=0;i<n;i++)
    {
      temp[(i+2)%n]=arr[i];
    }
    v=temp;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
return 0;
}