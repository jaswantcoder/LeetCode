
#define pb push_back
#define se second
#define fi first
#define all(v) v.begin(),v.end()
#define mp make_pair
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<double> d;
        vector<string> s;
        int i,j;
        for(i=1;i<n;i++)
        {
           for(j=i+1;j<=n;j++)
           {
               cout<<"d";
               if(d.find(i/(double)j)==d.end())
                {   d.insert(i/(double)j);
                 cout<<"s";
                      s.pb(to_string(i)+"/"+to_string(j));
                }
           }
        }
        return s;
        
    }
};
