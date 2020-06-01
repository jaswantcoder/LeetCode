class Solution {
public:
    int minDistance(string w1, string w2) {
        if(w1.size()==0 )
            return w2.size();
        if(w2.size()==0) return w1.size();
        int n=w1.size(),m=w2.size(),i,j;
        vector<vector<int>> dp(n+1,vector<int> (m+1));
        for(i=0;i<=n;i++)
        {
            dp[i][0]=i;
        }
        for(j=0;j<=m;j++)
        {
            dp[0][j]=j;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(w1[i-1]==w2[j-1])
                {
                   dp[i][j]= dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1]));
                }
            }
        }
        return dp.back().back();
        
    }
};
