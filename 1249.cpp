class Solution {
public:
    
    string minRemoveToMakeValid(string s) {
     
        string ss="";
        int i,x=0;
        for(i=0;i<s.size();i++)
        {
        if(s[i]=='(')
        {    x++;
              ss+='(';
        }
          else  if(s[i]==')')
                if(x>0)
                  {  x--; ss+=')';}
            else
            ;
            else
                ss+=s[i];
            
            
        }
     x=0;
       if(ss.size())
           for(auto it=ss.end()-1;it!=ss.begin()-1;it--)
           {
               if(*it==')')
                  x++;
               if(*it=='(')
               {if(x>0) x--;
                 else
                     ss.erase(it);
               }
                   
           }
        return ss;
    }
};
