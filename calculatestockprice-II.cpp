class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            
            int n=prices.size();
            int i=0;
            int j=1;
            int profit=0;
            
      
         while(j<n)
         {
            if(prices[j]>prices[i] )
            {
                
                // if(profit<=prices[j])
                // {
                    profit=prices[j]-prices[i]+profit;
               
                // }      
            }
    
         
         
            i++;
            j++;
    
         }
    
         return profit;
    
        }
    };