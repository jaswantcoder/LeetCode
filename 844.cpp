class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
        int i,j,skp=0; 
        i=s.size()-1;
        j=t.size()-1;
       cout<<s<<" "<<t<<endl;
        while(i>=0 || j>=0)
        {
             skp=0;
                 while(i>=0)
                 {
                     if(s[i]=='#')
                     {
                        skp++;
                         i--;
                         
                     }
                     else if(skp>0)
                     {
                         skp--;
                        i--;
                     }
                     else
                         break;

                 }
            skp=0;
            
            while(j>=0)
                  {
                      if(t[j]=='#')
                      {
                          skp++;
                          j--;
                      }
                else if(skp>0)
                {skp--;j--;}
                else break;
                
                  }
            cout<<i<<" "<<j<<endl;
            if(i>=0 &&  j>=0 && s[i]!=t[j])
                return false;
               if(i==-1 && j==-1)
            return true;
        i--;j--;
        }
    
        if(i==-1 && j==-1)
            return true;
        return false;
        
        }
};
