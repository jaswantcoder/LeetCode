class Solution {
public:
    string defangIPaddr(string a) {
        string s="";
        for(auto it:a )
        {
            if(it=='.')
                s+="[.]";
            else
                s+=it;
        }
        return s;
        
    }
};
