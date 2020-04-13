#define mp make_pair
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    
        
       map<int,int> m;
        m[0]=-1;
        int ans=0,i,ones=0;
        for(i=0;i<nums.size();i++)
        {
                 if(nums[i])
                     ones++;
            else ones--;
            
            if(m.find(ones)!=m.end())
            {
                ans=max(ans,i-m[ones]);
            }
            else
                m[ones]=i;
        }
        return ans;
     
        return 0;
    }
};
