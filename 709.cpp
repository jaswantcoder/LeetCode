class Solution {
public:
    string toLowerCase(string str) {
        string s="";
        for(auto it:str)
            if(it>='A' && it<='Z')
                s+=it-'A'+'a';
        else s+=it;
    return s;
    }
    
};
