#define pb push_back
#define fi first
#define se second
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<set<int>> edge(n);
        int i,j,tot=0,ans=0;
        for(auto it: roads)
        {
           edge[it[0]].insert(it[1]);
            edge[it[1]].insert(it[0]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    tot=0;
                    tot=edge[i].size()+edge[j].size();
                 if(edge[i].find(j)!=edge[i].end())
                     tot--;
                    ans=max(ans,tot);
                }
            }
        }
        return ans;
    }
};
