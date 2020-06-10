class Solution {
public:
     
    int minimumTotal(vector<vector<int>>& tri) {
       
        int i,j,n=tri.size();
        vector<int> dp(n,0);
        for(i=n-1;i>=0;i--)
        for(j=0;j<=i;j++)
        {
         
            if(i+1<n)
            {
                dp[j]=min(dp[j],dp[j+1]);
            }
            dp[j]+=tri[i][j];
        }
        return dp[0];
    }
};
