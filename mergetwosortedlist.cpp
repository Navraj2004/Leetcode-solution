 */
 class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
         if(list1==NULL) {
            return list2;
         }
         if(list2==NULL)
         {
            return list1;
         }
    
         ListNode *head=list1;
         ListNode*temp=head;
         ListNode*temp2=list2;
         if (list1->val <= list2->val) {
        head = list1;
        temp = list1;
        temp2 = list2;
    } else {
        head = list2;
        temp = list2;
        temp2 = list1;
    }
      
         while(temp->next!=NULL && temp2 !=NULL)
         {
          if (temp->next == NULL || temp->next->val > temp2->val)
          {
    
            ListNode*temp3=temp2->next;
            temp2->next=temp->next;
            temp->next=temp2;
             temp2=temp3;
          }
     temp = temp->next;
         }
    
    
       if (temp2 != NULL) {
            temp->next = temp2;
        }
           
    return head;
    
    
        }
    };