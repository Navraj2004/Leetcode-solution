class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
             
    
            if(head==NULL)
            {
                return head;
            }
    
    
             vector<int>ans;
             ans.push_back(head->val);
             
             ListNode* temp1=head->next;
             while(temp1!=NULL)
             {
                if(ans[ans.size()-1]!=temp1->val)
                {
                    ans.push_back(temp1->val);
                }
    
                temp1=temp1->next;
             }
    
            
            ListNode *head2=new ListNode(ans[0]);
            ListNode *temp2=head2;
             for(int i=1; i<ans.size(); i++)
             {
               
                
                 
                
                   ListNode *temp3=new ListNode(ans[i]);
                    temp2->next=temp3;
                    temp2=temp3;
    
                   
                 
    
                 
    
             }
             return head2;
    
        }
    };