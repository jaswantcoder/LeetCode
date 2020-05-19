class Solution {
public:
    
    
    bool check(map<char,int>m, map<char,int> h)
    {
              for(auto it:m)
              {
                  if(it.second!=h[it.first]) { return false;}
              }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
         if(s2.size()<s1.size()) return false;
     map<char,int> m,h;
        int i, n=s1.size();

        for(i=0;i<s1.size();i++)
        {
            h[s1[i]]++;
            m[s2[i]]++;
        }
        if(check(m,h)) return true;
        
        for(i=s1.size();i<s2.size();i++)
        {
            
        m[s2[i-n]]--;
            m[s2[i]]++;
            if(check(m,h))
            return true;;
        }
        return false;
        
        
    
    }
};
