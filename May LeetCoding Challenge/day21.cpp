class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int n= mat.size();
        int  m=mat[0].size();
        vector< vector<int> > dp(n, vector<int> (m,0));
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            if(mat[i][0]==1)
                dp[i][0]=1;
        }
        for(int j=0;j<m;j++)
            if(mat[0][j]) dp[0][j]=1;
        
        for(int i=1;i<n;i++)
            for(int j=1;j<m;j++)
            {
              if(mat[i][j])
                dp[i][j]= 1+ min(dp[i-1][j], min(dp[i][j-1],dp[i-1][j-1]));
            }
        for(auto it:dp)
            for(auto itt:it) cnt+=itt;
        return cnt;
    }
};

