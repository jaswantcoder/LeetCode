
#define vs vector<string>
#define pb push_back
#define vi vector<int>
#define mp make_pair
#define fi first
#define se second
class Solution {
public:
    string reformat(string s) {
        vector<char> a,b;
        string ans="";
        int i;
        for(auto it:s)
        {
            if(it>='a' && it<='z')
            {
                a.pb(it);
            }
            else b.pb(it);
        }
        if(a.size()==b.size()+1)
        {
            for(i=0;i<b.size();i++)
            {
                 ans+=a[i];
                 ans+=b[i];
                cout<<b[i]<<a[i];
            }
            ans+=a[i];
           // cout<<b[i];
        }
        else if(b.size()==a.size()+1)
        {
            for(i=0;i<a.size();i++)
            {
                 ans+=b[i];
                 ans+=a[i];
              //  cout<<a[i]<<b[i];
            }
            ans+=b[i];
        }
        else if(a.size()==b.size())
        {
            
             for(i=0;i<a.size();i++)
            {
                ans+=a[i];
                 ans+=b[i];
                cout<<a[i]<<b[i];
            }
        }
        return ans;
        
    }
};
