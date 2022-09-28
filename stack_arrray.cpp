#include<iostream>
using namespace std;
class stack{
   public:
   int *arr;
   int top;
   int size;

   void sz(int s)
   {
    this->size=s;
    
    arr=new int(s);
    top=-1;
   }

   void push(int val)
   {
    if(top==size-1)
    cout<<endl<<"stack is full";
    else
    {
        top++;
        arr[top]=val;

    }
   }

   void pop()
   {
    if(top==-1)
    cout<<endl<<"stack is empty";
    else{
        top--;
    }
   }
   void isempty(){
    if(top==-1)
    cout<<endl<<"it is empty";
    else 
    cout<<endl<<"it is not empty";
   }

   void peek()
   {
    if(top==-1)
    cout<<endl<<"stack is empty";
    else
    cout<<endl<<"top element is "<<arr[top];
   }
};
int main()
{
     stack s;
     s.sz(20);
    //  s.push(24);
    //  s.push(11);
    //  s.push(21);
    //  s.push(51);
     
     s.pop();
     s.isempty();
     s.peek();
}