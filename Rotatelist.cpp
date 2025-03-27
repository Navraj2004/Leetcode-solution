class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
      
          if(head==NULL)
          {
            return head;
          }
    
          ListNode*count=head;
          int total=0;
          while(count!=NULL)
          {
                total++;
                count=count->next;
          }
    k=k%total;   
    int i=0;
          
    while(i<k)
    {        ListNode*curr=head;
             ListNode*prev=NULL;
    
            while(curr->next!=NULL)
            {
                prev=curr;
                curr=curr->next;
            }
            curr->next=head;
            prev->next=NULL;
            head=curr;
     i++;       
    }
        return head;
    }
    };