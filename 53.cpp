class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,c=0,mm=a[0],i,mn=a[0];
      
        for(auto it:a)
        {
            c=max(c+it,it);
            mm=max(c,mm);
        }
        
        return mm;
    }
};
