
#define mp make_pair
#define fi first
#define se second
#define pb push_back

class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        s1="7"+s1;
        s2="h"+s2;
        int n=s1.size();
        int m=s2.size();
        int i,j;
     vector< vector <pair<int,pair<int,int>>>> a(n+1, vector<pair<int,pair<int,int>>> (m+1));
        i=0;j=0;
        for(i=0;i<n;i++)
        {
             a[i][j]=mp(0,mp(0,0));
        }
         for(i=0;i<m;i++)
        {
             a[j][i]=mp(0,mp(0,0));
        }
        for(i=1;i<n;i++)
        {
            
            for(j=1;j<m;j++)
            {
                
                if(s1[i]==s2[j])
                {
                   // cout<<" "<<i<<" "<<j<<endl;
               a[i][j]=mp(a[i-1][j-1].fi+1,mp(i-1,j-1));
                }
                else
                {  if(a[i-1][j].fi>a[i][j-1].fi)
                    {
                        a[i][j]=mp(a[i-1][j].fi, mp(i-1,j));
                    }
                else
                {
                    a[i][j]=mp(a[i][j-1].fi, mp(i,j-1));
                }
                 }
            }
        }
  /*      for(i=0;i<n;i++)
        {
            cout<<endl;
            
            for(j=0;j<m;j++)
                cout<<"("<<a[i][j].fi<<" "<<a[i][j].se.fi<<" "<<a[i][j].se.se<<" "<<")";
        }
        */
    string ans="";
        i=n-1;
        j=m-1;
        while(i>0 && j>0)
        {
         //   cout<<endl<<i<<" "<<j;
             if(a[i][j].se==mp(i-1,j-1))
                { ans+=s1[i];}
         // cout<<endl<<"{"<<a[i][j].se.fi<<" "<<i-1<<" "<<a[i][j].se.se<<" "<<j-1<<"}";
            
         int   x=i;
            i=a[i][j].se.fi;
             j=a[x][j].se.se;
        }
        cout<<ans;
        return ans.size();
        
        
        
    }
};
