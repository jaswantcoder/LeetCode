#define pb push_back

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& r) {
        map < int, vector<int> > m;
        for(auto &it:r)
        {
            m[it[0]].pb(it[1]);
        }
        int ans=0;
        int cnt;
        ans=n*2;
        for(auto  &it:m)
        {
            bool a[11]={false};
          
        cnt=0;
            for(auto &itt:it.second)
            {
                
                    a[itt]=true;  
            }
            if(a[2]||a[3] || a[4] || a[5])
                cnt++;
            if(a[6] || a[7] || a[8] || a[9])
                cnt++;
            if(a[4] || a[5] || a[6] || a[7])
                cnt++;
            ans-=(cnt>2)? 2: (cnt)?1:0; 
          
                
                
            }

            
            
        
        return ans;
        
    }
};
