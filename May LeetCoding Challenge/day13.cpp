
class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int i;
    stack<char> s;
        int K=k;
        
      for(i=0;i<num.size();i++)
      {
          while(s.size() && s.top()>num[i] && k)
          {
              s.pop();
              k--;     
          }
          s.push(num[i]);
      }
    
   while(k && s.size()>num.size()-K)
   {
      s.pop();
   }
        string ans="";
     while(!s.empty())
     {
         ans=s.top()+ans;
         s.pop();
     }
        for(i=0;i<ans.size();i++)
        {
            if(ans[i]!='0')
                return ans.substr(i,ans.size()-i);
        }
   
        return "0";
    }

};
