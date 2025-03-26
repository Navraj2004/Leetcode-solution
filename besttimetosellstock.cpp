class Solution {
    public:
        int maxProfit(vector<int>& prices) {
          int n=prices.size();
          int left=0;
          int right=1;
          int max=0;
          while(right<n)
          {
            if(prices[right]<prices[left])
            {
                left=right;
                right++;
            }
            else
            {
               if(max<(prices[right]-prices[left]))
               {
                max=prices[right]-prices[left];
               }
               right++;
            }
          }
     
    return max;
    
        }
    };