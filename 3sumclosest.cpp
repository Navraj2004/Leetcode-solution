class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            
            sort(nums.begin(), nums.end());
            
             int checkdifference=INT_MAX;
            for(int i=0; i<=nums.size()-3; i++)
            {
               int j=i+1;
               int k=nums.size()-1;
              
               while(j<k)
               {
                
                int sum=(nums[i]+nums[j]+nums[k]);
    
               if(checkdifference==INT_MAX || abs(target-sum)<abs(target-checkdifference))
               {
                checkdifference=sum;
               }
    
    
    
    
                if(sum>target)
                {
                    k--;
                }
                else
                {
                     j++;
                }
    
                 
    
               }
    
            }
           return   checkdifference;
        }
    };