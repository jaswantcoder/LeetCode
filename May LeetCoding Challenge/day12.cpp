class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans=0,sum=0;
        set<int> s;
        for(auto it:nums)
        {
            sum+=it;
            s.insert(it);
        }
        for(auto it:s)
        {
            ans+=2*it;
        }
        return ans-sum;
    }
};
