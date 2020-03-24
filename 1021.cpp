class Solution {
public:
    string removeOuterParentheses(string S) {
        string s="";
       int top =-1;
        string rs="";
        for(auto it:S)
        {
            s+=it;
            
            if(it==')')
            {
         top--;
            }
            else
                top++;
            if(top==-1)
            {
                rs+=s.substr(1,s.size()-2);
                s="";
            }
            
        }
        return rs;
        
        
    }
};
