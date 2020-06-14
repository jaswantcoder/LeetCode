class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int s=0;
        for(auto it:nums)
        {
            v.push_back(s+it);
            s+=it;
        }
        return v;
    }
};
