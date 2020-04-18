class Solution {
public:
    vector<vector<char>> g;
    int i,j;
    vector< vector<bool> > vis;
    void visit(int i,int j)
    {
        if(g[i][j]=='1' && !vis[i][j])
        {
     vis[i][j]=true;
            cout<<"hmm"<<endl;
            if(i-1>=0)
                visit(i-1,j);
            if(i+1<g.size())
                visit(i+1,j);
            if(j-1>=0)
                visit(i,j-1);
            if(j+1<g[0].size()) visit(i,j+1);
        }
            return;
    }
    int numIslands(vector<vector<char>>& grid) {
      g=grid;
        if(grid.size()==0)
            return 0;
        vis.resize(grid.size(), vector<bool> (grid[0].size(),false));
        int ans=0;
        
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                    visit(i,j);
                   ans++;
                }
            }
        }
        return ans;
        
    }
};
