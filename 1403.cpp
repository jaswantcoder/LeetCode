
#define all(v) v.begin(),v.end()
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0,ans=0;
        for(auto it:nums)
        {
            sum+=it;
        }
        vector<int> v;
        sort(all(nums));
        reverse(all(nums));
        for(auto it: nums)
        {
              ans+=it;
            v.push_back(it);
            if(ans>sum-ans)
            break;
        }
        return v;
        
    }
};
