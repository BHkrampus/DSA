#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* pre;
    node* next;
    
    node(int data){
       this->data=data;
       this->pre=NULL;
       this->next=NULL;
    }
};
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void inserthead(node* &head , int data){
    node* temp=new node(data);
    temp->next=head;
    head->pre=temp;
    head=temp;
}
void inserttail(node* &tail, int data){
     node* temp=new node(data);
     tail->next=temp;
     temp->pre=tail;
     tail=temp;
}
void insertmid(node* &head,int data,int pos)
{
    node* temp=new node(data);
    node* add=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        cnt++;
        add=add->next;
    }
     temp->next=add->next;
     temp->pre=add;
     add->next->pre=temp;
     add->next=temp;
}

void del(node* &head,int value)
{
    node* temp=head;
    if(temp->data==value)
    {
        head=head->next;
        temp->next->pre=NULL;
        temp->next=NULL;
        delete(temp);
        return;
    }
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            temp->pre->next=temp->next;
            temp->next=temp->pre;
            temp->pre=NULL;
            temp->next=NULL;
            delete(temp);
             return;
        }
        temp=temp->next;
    }
}
int main()
{
    node* nd=new node(6);
    node* head=nd;
    node* tail=nd;
    inserthead(head,11);
    inserthead(head,3);
    inserttail(tail,19);
    insertmid(head,15,4);
    del(head,3);
    print(head);
}