class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int mm=nums[0],sum=0;
        if(nums.size()==1)
            return nums[0];
        int mm2=nums[0];
        for(auto it:nums)
        {
            mm2=max(mm2,it);
            sum=max(sum+it,0);
            mm=max(sum,mm);
                
        }
        if(mm2<0)
            return mm2;
        
        return mm;
        
    }
};
