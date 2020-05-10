class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i,mp=0;
        if(p.size()<=1)
            return mp;
        for(i=0;i<p.size()-1;i++)
        {
            if(p[i]<p[i+1])
            {
                mp+=p[i+1]-p[i];
            }
                
        }
        return mp;
        
    }
};
