class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int left=0;
            int right=1;
            
            while(right<nums.size())
            {
                if(nums[left]==nums[right])
                {
                      return true;
                }
    
                else if(nums[left]!=nums[right])
                {
                     left++;
                    right++;   
                }
    
            }
            return false;
        }
    };