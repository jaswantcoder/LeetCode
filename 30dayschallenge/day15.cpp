class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1,z=0;
        vector<int> v(nums.size());
        for(auto it:nums)
        {
            
            if(!it)
                z++;
            else
                mul*=it;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] )
              if(z) v[i]=0; else  v[i]=mul/nums[i];
        else
        {
            if(z>1)
                v[i]=0;
            else
                v[i]=mul;
        }
        }
        return v;
        
    }
};
