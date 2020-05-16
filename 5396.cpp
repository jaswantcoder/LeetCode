class Solution {
public:
    int maxPower(string s) {
        
           if(s.size()==0) return 0;
        char p=s[0];
        int ans=0;
        int a=0;
        for(auto it:s)
        {
            if(it==p)
            {
                a++;
                ans=max(ans,a);
            }
            else
            {
               
                ans=max(ans,a);
                 a=1;
            }
            p=it;
            
        }
        return ans;
        
        
    }
};
