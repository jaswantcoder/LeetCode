class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       
       if(nums.size()<3)
           return true;
        int cnt=0,i;
        if(nums[1]<nums[0])
            cnt++;
        for(i=2;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1] )
            {
                
                if(nums[i-2]<nums[i])
                nums[i-1]=nums[i-2];
                else
                    nums[i]=nums[i-1];
                cnt++;
            }
                
        }
        if(cnt>1)
            return false;
        return true;
      
    }
};
