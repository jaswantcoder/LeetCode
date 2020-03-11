class Solution {
public:
    int minDeletionSize(vector<string>& a) {
        int n=a.size();
        int m=a[0].size(),i,j;
        int ans=0;
        for(j=0;j<m;j++)
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i][j]>a[i+1][j])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
