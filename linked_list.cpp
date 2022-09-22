#include<iostream>
using namespace std;

class node{
public:

int data;
node* next;

node(int data){
this->data=data;
this->next=NULL;
}

};

void inserthead(int data,node* &head)
{
    node* temp=new node(data);
    temp->next=head;
   head=temp;
   

}

//insertion
void inserttail(int data,node* &tail)
{
    node* temp=new node(data);
    tail->next=temp;
    tail=tail->next;
}
void insertmiddle(int data,int pos,node* &head,node* &tail)
{
     node* temp=new node(data);
     node* add=head;
     int cnt=1;
     while(cnt<pos-1){
        add=add->next;
        cnt++;
     }
     temp->next=add->next;
    add->next=temp;
    if(tail->next!= NULL)
    {
        tail=temp;
    }
    
}


//deletion
void del(int value,node* &head){
    node* pre=NULL;
    node* cur=head;
    if(cur->data==head->data){
        head=head->next;
        cur->next=NULL;
        delete cur;
        return;
    }
   
    while(cur->data!=value)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
    delete cur;
}
//pirnt
void print(node* &head)
{
    node* temp=head;
    while(temp != NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
}

//main funcion
int main()
{
  node* nod= new node(6);
  cout<<nod->data;
  cout<<endl<<nod->next<<endl;

  node* head=nod;
  node* tail=nod;
  cout<<"head: "<<head->data<<endl;
  cout<<"tail: "<<tail->data<<endl;
//   inserthead(11,head);
//   inserthead(21,head);
     inserttail(11,tail);
     inserttail(21,tail);
     inserttail(25,tail);
     insertmiddle(19,3,head,tail);
     insertmiddle(29,6,head,tail);
     del(6,head);

  print(head);
  cout<<"head: "<<head->data<<endl;
  cout<<"tail: "<<tail->data<<endl;

}