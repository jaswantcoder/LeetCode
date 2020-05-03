class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans=0;
        set<int> s;
        for(auto it:J)
        {
            s.insert(it);
        }
        for(auto it:S)
        {
            if(s.find(it)!=s.end())
                ans++;
        }
        return ans;
    }
};
