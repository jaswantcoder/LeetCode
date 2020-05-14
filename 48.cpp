class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int i=0,j=0,n=mat.size();
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            swap(mat[i][j],mat[j][i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
                swap(mat[i][j],mat[i][n-j-1]);
        }
        return ;
        
        
        
    }
};
