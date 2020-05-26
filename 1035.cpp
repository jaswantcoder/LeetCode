class Solution {
public:
    int maxUncrossedLines(vector<int>& a, vector<int>& b) {
       
           int i,j,n=a.size(),m=b.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        vector<vector<pair<int,int>>> dir(n+1,vector<pair<int,int>> (m+1, {0,0}));
     
        
        for(i=0;i<n;i++)
            dp[i][0]=0;
        for(j=0;j<m;j++)
            dp[0][j]=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                dp[i][j]=dp[i][j-1];
                dir[i][j]={0,-1};
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    dir[i][j]={-1,-1};
                }
                else 
                {
                   if(dp[i][j-1]<dp[i-1][j])
                   {
                       dp[i][j]=dp[i-1][j];
                       dir[i][j]={-1,0};
                   }
                  
                    
                }
              //  cout<<dp[i][j]<<" ";
            }
          //  cout<<endl;
        }
        
       // cout<<dp[n-1][m-1];
        return dp[n][m];
        
        
    }
};
