class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
              vector<char>store;
           if(n==0)
           {
            return " ";
           }
           else if(n==1)
           {
            return strs[0];
           }
    
           for(int j=0; j<strs[0].size(); j++)
           {
            for(int i=0; i<n-1; i++)
            {
                if(strs[i][j]==strs[i+1][j])
                {
                if(i==n-2)
                {
                    store.push_back(strs[i][j]);
                }
                
                }
                else
                {
                    return string(store.begin(), store.end());
                }
            }
           }
         return string(store.begin(), store.end());
        
    
    
    
        }
    };