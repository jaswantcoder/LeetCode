#define pb push_back
#define fi first
#define all(v) v.begin(),v.end()
#define mp make_pair
class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int i,j,ans=0,n=scores.size();
        vector<pair<int,int>> v;
        for(i=0;i<n;i++)
        {
            v.pb(mp(ages[i],scores[i]));
        }
        sort(all(v));
        vector<int> maxsum(n);
        vector<int> a;
        for(auto it:v)
        {
            a.pb(it.second);
        }
        for(i=0;i<n;i++)
        {
            maxsum[i]=a[i];
        }
        
        for(i=1;i<n;i++)
        {
           // cout<<a[i]<<" ";
            for(j=0;j<i;j++)
            {
                if(a[i]>=a[j] && maxsum[i]<=maxsum[j]+a[i])
                    maxsum[i]=maxsum[j]+a[i];
            }
            
        }
        for(i=0;i<n;i++)
         {
          //  cout<<maxsum[i]<<" ";
            ans=max(ans,maxsum[i]);}
        
        return ans;
    }
};
