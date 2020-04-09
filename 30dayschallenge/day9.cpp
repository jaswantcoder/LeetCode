class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i=-1;
        for(auto it:s)
        {
            if(it=='#')
            { if(i>=0)
                    i--;}
            else
                s[++i]=it;
        }
         
        s.erase(s.begin()+i+1,s.end());
        i=-1;
          for(auto it:t)
        {
            if(it=='#')
            { if(i>=0)
                    i--;}
            else
                t[++i]=it;
        }
         t.erase(t.begin()+i+1,t.end());
        cout<<s<<endl<<t<<endl;
        if(s.compare(t)==0)
            return true;
        return false;
        
        }
};
