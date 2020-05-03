class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s;
        string ss;
        for(auto &it: paths)
        {
            s.insert(it[0]);
        }
        for(auto &it:paths)
        {
            if(s.find(it[1])==s.end())
                return it[1];
        }
        return ss;
        
    }
};
