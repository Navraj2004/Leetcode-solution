#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

 Node(int  value)
 {
    data=value;
    prev=NULL;
    next=NULL;
 }
};


int main()
{
    Node *Head=NULL;
    Node *tail=NULL;
    int arr[5]={1,7,8,9,2};
    for(int i=0; i<5; i++)
    {
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
            tail=Head;
        }
        else
        {
            Node*temp1=new Node(arr[i]);
            tail->next=temp1;
            temp1->prev=tail;
            tail=temp1;
        }
    }


   if(Head !=NULL)
   {
    Node *temp =Head;
    Head=Head->next;
    delete temp;

    if(Head!=NULL)
    {
       Head->prev=NULL;
    }

Node*check=Head;

while(check!=NULL)
{
    cout<<check->data<<" ";
    check=check->next;
}
}
}