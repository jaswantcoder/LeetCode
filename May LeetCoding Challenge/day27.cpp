
#define pb push_back

class Solution {
public:
    map<int,int> colored;
    map<int,vector<int>> adj;
    bool color(int i,int c)
    {
        if(colored[i] && colored[i]!=c) return false;
        if(colored[i] && colored[i]==c) return true;
        colored[i]=c;
        for(auto n: adj[i])
        {
            if(!color(n,c^3))
                return false;
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        int i;
        for(auto it:dislikes)
        {
            adj[it[0]].pb(it[1]);
            adj[it[1]].pb(it[0]);
        }
        for(i=1;i<=n;i++)
        {
            if(!colored[i])
            {
                if(!color(i,1)) return false;
            }
        }
        return true;
    }
};
