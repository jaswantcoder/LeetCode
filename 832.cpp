class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        int i,j;
        for(j=0;j<v[0].size()/2;j++)
        {
            for(i=0;i<v.size();i++)
            {
                  int x=v[i][j];
                v[i][j]=v[i][j]+v[i][v[0].size()-j-1];
                v[i][v[0].size()-j-1]=v[i][j]-v[i][v[0].size()-j-1];
                 v[i][j]=v[i][j]-v[i][v[0].size()-j-1];
            }
            
        }
        for(i=0;i<v.size();i++)
            for(j=0;j<v[0].size();j++)
                v[i][j]=1-v[i][j];
        return v;
    }
};
