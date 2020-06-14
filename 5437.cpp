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
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        vector<int> v;
        map<int,int> m;
        int ans=0,i;
            
        for(auto it:arr)
        {
            m[it]++;
        }
        for(auto it:m)
        {
            v.pb(it.se);
        }
        sort(all(v));
         i=0; int r=k;;
      while(r>0)
      {
        if(v[i]>r)
          {  v[i]-=r;r=0;}
          else
          {
              r-=v[i];
              v[i]=-1;
              
          }
          i++;
      }
          
        for(auto it:v)
        {
            if(it>-1)
                ans++;
        }
        return ans;
        
    }
};
