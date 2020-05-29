#define pb push_back
#define vi vector<int>

class Solution {
public:
    vector<int> countBits(int n) {
        int k=1;
        vi v;
    
        if(n>=0)
            v.pb(0);
        if(n>0)
            v.pb(1);
        for(int i=2;i<=n;i++)
        {
            if(i==2*k)
            {
                k*=2;
            }
           v.pb(1+v[i-k]);
        }
        return v;
      
        
        
    }
};
