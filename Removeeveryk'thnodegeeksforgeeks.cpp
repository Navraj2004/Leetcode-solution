class Solution {
    public:
      Node* deleteK(Node* head, int k) {
          // code here
          if (k==0 || head==NULL)
           return head;
           
            
          
          Node*curr=head;
          Node*prev=NULL;
          int total=0;
          int count=1;
          while(curr!=NULL)
          {
              
              if(count==k)
              {
                  prev->next=curr->next;
                  delete curr;
                  curr=prev->next;
                  count=1;
              }
              else
              {
              prev=curr;
              curr=curr->next;
              count++;
              }
          }
          
          
          return head;
          
      }
  };