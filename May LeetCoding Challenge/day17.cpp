#define vi vector<int>
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
class Solution {
public:
    bool check(map<char,int> h, map<char,int> m)
    {
               for(auto it:h)
               {
                   if(m[it.fi]!=it.se) return false;
               }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        
        int i;
        vi v;
         map<char,int> m;
     
     if(p.size()>s.size())
         return v;
           for(auto it:p)
            m[it]++;
        map<char,int> h;
        for(i=0;i<p.size();i++) h[s[i]]++;
        
        if( check(h,m))
        {
            v.pb(0);
        }
        
          for(i=p.size();i<s.size();i++)
          {
              h[s[i-p.size()]]--;
              h[s[i]]++;
              if(check(h,m)) v.pb(i-p.size()+1);
          }
        return v;
        
     
        
    }
};
