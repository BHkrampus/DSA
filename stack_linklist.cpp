#include<iostream>
#include<stack>
using namespace std;
class stackk{
    public:
    //variables
    int top;
    int val;
    int *next;


//methods
void push(int val)
{
    if(this.val==NULL)
    {
        this.val=val;
        this->next=NULL;
    }
    this.next=val;
    
}

// void pop()
// void empty()
// void peek()

};





int main()
{
   
    stackk* st = new stackk;
    stackk* head=st;
    stackk* top=st;
   cout<<"val"<<st->val;
    st.push(56);


}