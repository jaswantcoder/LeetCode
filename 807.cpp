class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
       int n=grid.size();
        int m=grid[0].size(),i,j,ans=0;
         int r[n]={0},c[n]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             r[i]=max(r[i],grid[i][j]);
                c[j]=max(c[j],grid[i][j]);
            }
        }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {
                
               ans+= min(r[i],c[j])-grid[i][j];
            }
    
        return ans;
    }
};
