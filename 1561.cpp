
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
    int maxCoins(vector<int>& piles) {
        sort(all(piles));
        int n=piles.size();
        int i,ans=0;
        for(i=n/3;i<n;i+=2)
        {
            ans+=piles[i];
        }
        return ans;
        
    }
};
