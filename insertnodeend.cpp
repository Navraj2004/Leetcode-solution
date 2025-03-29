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
int arr[5]={1,9,2,7,4};
 for(int  i=0; i<5; i++)
    if(Head==NULL)
    {
        Head=new Node(arr[i]);
    }

    else
    {
        Node *temp1=Head;

        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }

        Node *temp2=new Node(arr[i]);
        temp1->next=temp2;
        temp2->prev=temp1;


    }



    Node *print=Head;

    while(print!=NULL)
    {
        cout<<print->data<<" ";
        print=print->next;
    }
    
}