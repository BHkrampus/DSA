#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,size,carry=0,sum=0;
    int arr1[]={3,5,9,7,5,9,6,1},arr2[]={2,8,7,9,4};
    vector<int> temp;
    m=sizeof(arr1)/sizeof(arr1[0]);
    n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<m<<endl;
    cout<<n<<endl;
    while(m>=0 && n>=0)
    { int val=arr1[m-1]+arr2[n-1];
    // cout<<"val="<<val<<"  ";
       sum=val+carry;
       if(sum<10)
      {
       temp.push_back(sum);
       carry=0;
      } 
       else
       {
        sum=sum%10;
        temp.push_back(sum); 
        carry=1;
       }
       m--;
       n--;
    //    cout<<temp.back()<<"  ";
    }
    if(n<0)
    {
      for(int i=m-1;i>=0;i--)
      {
        temp.push_back(arr1[i]+carry);
        carry=0;
        //  cout<<temp.back()<<"  ";
      }
    }
    cout<<"carry="<<carry<<endl;
    if(m<0)
    {
      for(int i=n-1;i>=0;i--)
      {
        temp.push_back(arr1[i]+carry);
        carry=0;
        //  cout<<temp.back()<<"  ";
      }
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i]<<"  ";
    }
    
     return 0;
}
