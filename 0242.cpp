class Solution {
public:
    bool isAnagram(string s, string t) {
        
    if(t.size()!=s.size()) return false;
        map<char,int> mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:t)
        {
      if(!mp[it])
          return false;
            mp[it]--;
        }
        
        return true;
    
        
    }
};
