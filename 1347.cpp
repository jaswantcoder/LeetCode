class Solution {
public:
    int minSteps(string s, string t) {
        int cnt=0;
        map<int,int> m;
        for(auto it:s)
        {
            m[it]++;
        }
        for(auto it:t)
        {
            m[it]--;
        }
        for(auto it:m)
        {
        if(it.second<0)
            cnt-=it.second;
        }
            
        return cnt;
    }
};
