class Solution {
public:
    bool canConstruct(string rans, string mag) {
        multiset<int> s;
        for(auto it: mag)
        {
            s.insert(it);
        }
        for(auto it:rans)
        {
            if(s.find(it)==s.end())
                return false;
            s.erase(s.find(it));
        }
        return true;
        
    }
};
