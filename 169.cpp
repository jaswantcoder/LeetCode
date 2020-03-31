class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        map<int,int>m ;
        for(auto it:nums)
            m[it]++;
        for(auto it:nums)
        {
            if(it.se>n/2)
                ans=it.se;
        }
        return ans;
        
    }
};
