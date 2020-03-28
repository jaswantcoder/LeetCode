• class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> v(h.size());
        int ans=0,i;
        for(i=0;i<h.size();i++)
        {
        v[i]=h[i];
        }
        sort(h.begin(),h.end());
        for(i=0;i<h.size();i++)
        {
            if(v[i]!=h[i])
                ans++;
        }
    return ans;
    }
};
