class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int ans=-1;
        map<int,int> m,t;
        for(auto it: trust)
        {
            m[it[0]]++;
            t[it[1]]++;
        }
        for(int i=1;i<=N;i++)
        {
            if(m[i]==0 && t[i]==N-1)
            {
                
                if(ans!=-1)
                    return -1;
                else
                    ans=i;
            }
        }
        return ans;
    }
};
