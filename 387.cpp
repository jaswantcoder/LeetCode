#define fi first
#define se second
class Solution {
public:
    int firstUniqChar(string s) {

        unordered_map<char,int> m;
    for(auto it :s)
    {
        m[it]++;
    }
        int n=s.size();
     for(int i=0;i<n;i++)
         if(m[s[i]]==1)
             return i;
        return -1;
        
        
    }
};
