class Solution {
public:
    vector<bool>vis;
    bool cycle (set<int>  V[], vector<bool> &vis, int u)
    {
        if(vis[u]) return true;
        vis[u]=true;
        for(auto it: V[u])
        {
            if(cycle(V,vis,it)) return true;
        }
        vis[u]=false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& edge) {
         vis.resize(n+1,false);
       set<int> v[n+1];
        for(auto it :edge)
        {
            v[it[0]].insert(it[1]);
        }
        for(int i=1;i<=n;i++)
        {
            vis[i]=true;
         for(auto it:v[i])
         {
             if(cycle(v,vis,it)) return false;
         }
            vis[i]=false;
        }
        return true;
        
    }
};
