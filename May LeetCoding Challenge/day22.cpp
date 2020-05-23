
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(),v.end()
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int> m;
        string ans="";
        vector<pair<int,char >> v;
        int i;
        for(auto it:s) m[it]++;
        for(auto it:m) v.pb(mp(it.se,it.fi));
        sort(all(v));
        reverse(all(v));
        for(auto it:v)
        {
            cout<<it.se<<" "<<it.fi<<endl;
            for(i=0;i<it.fi;i++)
                ans+=it.se;
        }
        return ans;
    }
};
