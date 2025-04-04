class Solution {
    public:
      Node* intersectPoint(Node* head1, Node* head2) {
          //  Code Here
          
          Node *curr1=head1;
          Node *curr2=head2;
          int count0=1;
          int count1=1;
          while(curr1!=NULL)
          {
              count0++;
              curr1=curr1->next;
          }
          
          while(curr2!=NULL)
          {
              count1++;
              curr2=curr2->next;
          }
          curr1=head1;
          curr2=head2;
          int count;
          if(count0 > count1)
          {
              count=count0-count1;
          
          while(count--)
          {
              curr1=curr1->next;
          }
          
          }
          
          
          if(count1>count0)
          {
              count =count1-count0;
              
              while(count--)
              {
                  curr2=curr2->next;
              }
              
          }
          
          
          
          while(curr1!=curr2)
          {
              curr1=curr1->next;
              curr2=curr2->next;
          }
          
          return curr1;
          
          
          
      }
  };