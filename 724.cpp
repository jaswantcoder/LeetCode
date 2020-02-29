
class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();                                                         
        int sum = accumulate(nums.begin(),nums.end(),0) , currSum = 0 , i = 0;        // accumulate is used to sum up values in range

        for (i=0;i<n;i++)
        {
            if(sum-nums[i] == 2 * currSum)                                            
            { return i ;}
            else{
            currSum += nums[i];}                                                     
        }
        return -1;

    }
};
