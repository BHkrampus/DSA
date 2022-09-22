#include<iostream>
using namespace std;
int result=0;
int sum(int *arr,int size){
    
    if(size==0)
    return 0;

    result+=*arr;
     size--;
    sum(arr+1,size);
    return result;
}
int main()
{    
    int arr[]={2,4,6,4,7,3,7,4};
    int res = sum(arr,8);
    cout<<res;
    return 0;

}