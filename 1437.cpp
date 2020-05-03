class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int i,n=nums.size(),j;
        bool f=false;
     for(i=0;i<n;i++)
     {
         if(nums[i]&& !f)
         {
             j=i;
             f=true;
         }
         else if(nums[i])
         {
             if(i-j-1<k)
             {
                 return false;
             }
             j=i;
         }
     }
        return true;
        
    }
};
