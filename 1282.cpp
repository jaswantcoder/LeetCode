#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vvi vector<vi> 
#define pb push_back
#define fi first
#define se second
#define mp make_pair
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& b) {
          vvi v;
        vector<pair<int,int>> a;
        int i;
        for(i=0;i<b.size();i++)
        {
            a.pb(mp(b[i],i));
        }
        sort(all(a));
        
        if(a.size()==0)
            return v;
        int j=-1,cnt=0;
    
        for(i=0;i<a.size();i++)
        {
            if(!cnt)
            {
                cnt=a[i].fi;
                j++;
                vi vv;
                v.pb(vv);
               
            }
              if(cnt--)
              {
                 v[j].pb(a[i].se);
              }
        }
        
        return v;
        
    }
};
