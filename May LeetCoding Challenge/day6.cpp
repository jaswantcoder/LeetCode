class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
     for(auto it:nums)
     {
         m[it]++;
         if(m[it]==nums.size()/2+1)
             return it;
     }
       return 0; 
    }
};
