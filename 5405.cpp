#define pb push_back
#define vi  vector<int>
#define fi first
#define se second
#define rip(i,a,b) for(i=a;i<b;i++)
class Solution {
public:
    int countTriplets(vector<int>& arr) {
    
        int i,n=arr.size(),j;
        map<int,vi> m;
        m[0].pb(-1);
        vi x(n);
        int p=0,ans=0;
        for(i=0;i<n;i++)
        {
            x[i]=arr[i]^p;
            m[x[i]].pb(i);
            p^=arr[i];
        }
        
        for(auto &it:m)
        {
            for(i=0;i<it.se.size()-1;i++)
            {
               for(j=i+1;j<it.se.size();j++)
               {
                   ans+=it.se[j]-it.se[i]-1;
               }
            }
        }
        return ans;
        
        
        
    }
};
