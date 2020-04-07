
#define pb push_back
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        map<string, vector<string>> m;
        string s2;
        for(auto &it:s)
        {
            s2=it;
            sort(s2.begin(),s2.end());
          m[s2].pb(it);
        }
        vector< vector < string > > v;
        for(auto it:m)
        {
           v.pb(it.second);
        }
        return v;
        
        
    }
};