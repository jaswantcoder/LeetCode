class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        map<int,int> m;
        int ans=0;
       
        for(auto it:nums)
        {
            
         m[sum]++;
            sum+=it;
            ans+=m[sum-k];
           
        }
        
        
        return ans;
    }
};
