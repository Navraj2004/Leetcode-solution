/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            
          if(head->next==NULL)
          {
             return 1;
          }
    
          int  count=0;
        ListNode *curr=head;
          while(curr!=NULL)
          {
            count++;
            curr=curr->next;
          }
    
          count/=2;
     
          curr=head;
          ListNode *prev=NULL;
          while(count--)
          {
             prev=curr;
             curr=curr->next;
          } 
    
          prev->next=NULL;
    
        prev=NULL;
        ListNode *nex=NULL;
    
         while(curr!=NULL)
         {
           nex=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nex;
          
         }
        
       ListNode *Head1=head;
        ListNode *Head2=prev;
    
        while(Head1!=NULL)
        {
            if(Head1->val != Head2->val )
            {
                return 0;
            }
            Head1= Head1->next;
            Head2=Head2->next;
    
        }
    
        return 1;
        }
    };