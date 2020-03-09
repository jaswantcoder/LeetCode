class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
                sum+=nums[i];
        }
        return sum;
    }
};
