class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int start = 0;
            int end = nums.size() - 1;
    
            while (start < end) {
                int mid = (start + end) / 2;
    
                // Check right side only if mid is not the last index
                if ( nums[mid] < nums[mid + 1]) {
                    start = mid + 1;
                } else {
                    end = mid;
                }
            }
    
            return start;
        }
    };
    