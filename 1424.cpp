
#define pb push_back 
#define se second
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
      map<int,vector<int>> m;
        int i,j;
        
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums[i].size();j++)
            {
                m[i+j].pb(nums[i][j]);
            }
        }
        
        vector<int> v;
        for(auto it:m)
        {
            reverse(it.se.begin(),it.se.end());
            for(auto itt: it.se)
            {
                v.pb(itt);
            }
                
            
        }
        
        return v;
        
    }
};
