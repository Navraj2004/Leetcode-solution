#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *prev;
    Node *next;

 Node(int value)
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
  
    int arr[]={1,7,8,9,2};
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


int pos=2;

if(pos==0)
{
    //LINKEDlist does not exist
    if(Head==NULL)
    {
        Head=new Node(5);
    }

    else
    {
        Node *temp=new Node(5);
        temp->next = Head;
        Head->prev=temp;
        Head=temp;
    }

}
else
{
       Node * curr= Head;
       //Go to the node, after which i have to insert
       while(--pos)
       {
          curr=curr->next;
       };
        //insert at end
        if(curr->next==NULL) //last node
        {
            Node *temp= new Node(5);
            temp->prev=curr;
            curr->next=temp;
        }

        //insert in middle

        else
        {
            Node *temp = new Node(5);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
            temp->next->prev= temp;
        }

}

Node *temp2=Head;

while(temp2!=NULL)
{
    cout<<temp2->data<<" ";
    temp2=temp2->next;
}




}