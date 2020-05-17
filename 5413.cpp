
#define pb push_back
#define mp make_pair
#define vl vector<int>
#define vs vector<string>
#define fi first
#define se second
#define all(v) v.begin(),v.end()

class Solution {
public:
    string arrangeWords(string text) {
         vector<pair<int,int>> v;
        string s="";
         vs str;
        int i=0;
        for(auto it:text)
        {
            if(it==' ')
            {
                v.pb(mp(s.size(),i));
                str.pb(s);
                s="";
                i++;
            }
            else
            {
                s+=it;
            }
        }
        v.pb(mp(s.size(),i));
        str.pb(s);
        
        sort(all(v));
        s="";
        bool f=true;
       for(i=0;i<v.size()-1;i++)
       {
           if(f)
           { 
               f=false;
               if( str[v[i].se][0]>='a' &&  str[v[i].se][0]<='z')
           {
               str[v[i].se][0]=str[v[i].se][0]-'a' + 'A';
               f=false;
           }
           }
           else if(!f && str[v[i].se][0]>='A' &&  str[v[i].se][0]<='Z')
             {  str[v[i].se][0]=str[v[i].se][0]-'A' + 'a';
             cout<<str[v[i].se][0]<<" ";
             }
           s+=str[v[i].se];
           s+=" ";
       }
        if(!f && str[v[i].se][0]>='A' &&  str[v[i].se][0]<='Z')
        str[v[i].se][0]=str[v[i].se][0]-'A' + 'a';
        s+=str[v[i].se];
        return s;
        
    }
};
