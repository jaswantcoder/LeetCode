class Solution {
public:
    vector<int> diStringMatch(string s) {
        int p=0,q=s.size(),i;
       vector<int> a(s.size()+1);
             for(i=0;i<s.size();i++)
             {
                 if(s[i]=='I')
                     a[i]=p++;
                 else
                     a[i]=q--;
             }
        a[i]=q;
        return a;
    }
};
