class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s= countAndSay(n-1);
        int cnt=1;
        char c=s[0];
        string ans="";
        for(int i=1;i<s.size();i++)
        {
            if(c!=s[i])
            {
                ans+=to_string(cnt)+c;
                cnt=1;
                c=s[i];
            }
            else cnt++;
        }
        ans+=to_string(cnt)+c;
        return ans;
    }
};
