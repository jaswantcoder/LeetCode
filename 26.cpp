class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0,j=0;
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[++i]=nums[j];
            }
        }
        if(nums.size())
        return i+1;
        return 0;
    }
};
