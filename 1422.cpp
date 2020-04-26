class Solution {
public:
    int maxScore(string s) {
        int ans=0,z=0,i=0,ones=0;
      vector<int> a(s.size(),0);
    for(auto it:s)
    {
    if(it=='0')
    {
            z++;
        a[i]=z;
    }
        else ones++;
        i++;
    }
        if(z==s.size())
            return z-1;
        for(i=0;i<a.size()-1;i++)
        {
        
            ans=max(ans,a[i]+ones-i+a[i]-1);
            
        }
       
        return ans;
        
    }
};
