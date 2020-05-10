
#define pb push_back
#define vi  vector<int>
#define fi first
#define se second
#define rip(i,a,b) for(i=a;i<b;i++)
class Solution {
public:
    
    int collect( map<int,vector<int>> & adj,int &root,vector<bool>& app)
    {
        int ans=0,val=0;
        if(adj[root].size()==0)
            return 0;
        for(auto &it: adj[root])
        {
          
            val=collect(adj,it,app);
            ans+=val;
             if(app[it] || val)
              ans+=2; 
        }
        return ans;
    }
    
    int minTime(int n, vector<vector<int>>& edge, vector<bool>& app) {
         map<int,vector<int>> adj;
        int root=0;
       for(auto &it: edge)
       {
           adj[it[0]].pb(it[1]);
       }
        
        return collect(adj,root,app);
        
    }
};
