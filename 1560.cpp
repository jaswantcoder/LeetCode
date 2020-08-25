
#include <bits/stdc++.h>
#define  ll long long
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
#define vl vector<ll>
#define vs vector<string>
#define vd vector<double>
#define all(v) v.begin(),v.end()
#define vpll vector<pll>
#define foreach(x,s) for(_typeof(s.begin()) x=s.begin();x!=s.end();x++)
#define vi vector<int>
#define maxn 200005
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define db double
#define fi first
#define se second

class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        
        vector<int> f(n+1,0), v;
        int mm=0,i;
        int start=rounds[0];
          int end=rounds[0];
        for(auto end:rounds)
        {
            
            for(i=start;i!=end;i++)
            {
                if(i==n+1)
                  {  i=0;continue;}
                f[i]++;
            }
         
            start=end;
        }
        f[rounds.back()]++;
        mm=*max_element(all(f));
        for(i=1;i<=n;i++)
        {
            cout<<f[i]<<" ";
            if(f[i]==mm)
            {
                v.pb(i);
            }
        }
        
        return v;
        
        
    }
};
