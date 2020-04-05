class Solution {
public:
   
    void incr(string &s)
    {
        reverse(s.begin(),s.end());
        int i;
        for(i=0;i<s.size();i++)
        {
            cout<<i<<" ";
            if(s[i]=='1')
                s[i]='0';
            else
            {
                s[i]='1';
                break;
            }
        }
        if(i==s.size())
            s+="1";
        reverse(s.begin(),s.end());
        
    }
    int numSteps(string s) {
  
        int steps=0;
        while(s.size()>1)
        {
            cout<<s<<endl;
            if(s.back()=='0')
                s.pop_back();
            else
                incr(s);
            steps++;
        }
        
        
        
        return steps;
    }
};
