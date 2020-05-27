#define pb push_back
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
     vector<int> a(2*n+1,-2);
        a[n]=-1;
        int ans=0,i,sum=0;
            for(i=0;i<n;i++)
            {
                    if(nums[i])
                        sum++;
                else sum--;
                if(a[sum+n]!=-2)
                    ans=max(ans,i-a[sum+n]);
                else a[sum+n]=i;
            }
     
        return ans;
    }
};
