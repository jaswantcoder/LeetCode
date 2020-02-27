#define all(v) v.begin(),v.end()
#define pb push_back
class Solution {
public:
    int check(vector<int> & a,int t)
    {
        int sum=0;
        for(auto &it:a)
            sum+=min(it,t);
        return sum;
    }
    int findBestValue(vector<int>& v, int t) {
        sort(all(v));
       int l=0,r=1e5;
        while(l<r)
        {
            int m=l+r>>1;
            if(check(v,m)>=t)
                r=m;
            else
                l=m+1;
        }
        int s1=check(v,l-1),s2=check(v,l);
        if(abs(s1-t)<=abs(s2-t))
            return l-1;
        else
            return l;
        
        
    }
};
