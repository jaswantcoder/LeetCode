class Solution {
public:
    int maxDepth(string s) {
       int p=0,ans=0;
        for(auto it:s)
        {
            if(it=='(')
                p++;
            else if(it==')')
            p--;
             ans=max(p,ans);
        }
        return ans;
    }
};