class Solution {
public:
    string sortString(string ss) {
        int a[26]={0},i;
      for(auto it:ss)
          a[it-'a']++;
        bool f=true;
        string s="";
        while(f)
        {
             f=false;
            for(i=0;i<26;i++)
        {
            if(a[i])
            {
                s+=char('a'+i);
                a[i]--;
                
            }
        }
        for(i=25;i>=0;i--)
        {
            if(a[i])
            {   s+=char('a'+i);
            a[i]--;
            if(a[i])
                f=true;
            }
        }
        }
    
        return s;
    }
};
