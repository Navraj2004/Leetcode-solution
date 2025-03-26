class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            
              vector<int>ans;
               ListNode *temp=head;
    
               while(temp!=NULL)
               {
                ans.push_back(temp->val);
                temp=temp->next;
               }
    
               int i=ans.size()-1;
               temp=head;
    
               while(temp!=NULL)
               {
                temp->val=ans[i];
                temp=temp->next;
                i--;
               }
            
            return head;
            
        }
    };