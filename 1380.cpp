class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        vector<int> mini(mat.size()+1,mat[0].size()-1);
        vector<int> maxx(mat[0].size(),0);
        int i,j;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[0].size();j++)
            {
                if(min(mat[i][j],mat[i][mini[i]])==mat[i][j])
                    mini[i]=j;
                if(max(mat[i][j],mat[maxx[j]][j])==mat[i][j])
                    maxx[j]=i;
            }
            
        }
        vector<int> ans;
        for(i=0;i<mat.size();i++)
        {
            if(maxx[mini[i]]==i)
                ans.push_back(mat[i][mini[i]]);
        }
        return ans;
    }
};
