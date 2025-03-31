class Solution {
    public:
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
         int   n=nums.size();
      vector<vector<int>> store;
        for(int o=0; o<n-3; o++)
        {
               if (o > 0 && nums[o] == nums[o - 1]) continue; 
          for(int i=o+1; i<nums.size()-2; i++)
          {
                if (i > o + 1 && nums[i] == nums[i - 1]) continue;
    
           int j=i+1;
           int k=nums.size()-1;
    
           while(j<k)
           {
              long long sum= (long long)nums[o] + nums[i] + nums[j] + nums[k];
              
              if(sum==target)
              {
                store.push_back({nums[o],nums[i], nums[j], nums[k]});
                j++;
                k--;
                
                            while (j < k && nums[j] == nums[j - 1]) j++; 
                            while (j < k && nums[k] == nums[k + 1]) k--;
                
              }
    
              else if(sum>target)
              {
                 k--;
              }
              else
              {
                j++;
              }
           }
    
           }
    
          }  
          
    
    return store;
    
    
        }
    };