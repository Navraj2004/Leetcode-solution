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
    int arr[6]={1,7,6,8,9,2};
    for(int i=0; i<6; i++)
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
    
    int pos=3;
     pos--;
    if(pos==1)
    {
        if(Head->next==NULL)
        {
            delete Head;
            Head=NULL;
        }
        else
        {
            Node *temp=Head;
            Head = Head->next;
            delete temp;
            Head->prev=NULL;
        }


    }

    else
    {
        Node *curr = Head;
        while(pos--)
        {
            curr=curr->next;
        }
     
        //delete at end

        if(curr->next==NULL)
        {
            curr->prev->next=NULL;
            delete curr;
        }
        //delete at middle

        else
        {
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }

        

    }
 












Node*check=Head;

while(check!=NULL)
{
    cout<<check->data<<" ";
    check=check->next;
}
}
