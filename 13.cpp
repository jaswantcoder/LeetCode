class Solution {
public:
    int romanToInt(string s) {
        int sum=0,i;
      map<char,int> M;
        M['I']=1;
        M['V']=5;
        M['X']=10;
        M['L']=50;
        M['C']=100;
        M['D']=500;
        M['M']=1000;
        sum+=M[s[s.size()-1]];
        for(i=s.size()-2;i>=0;i--)
        {
            if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
               sum-=1;
              else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C'))
               sum-=10;
                  else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))
               sum-=100;
            else
                sum+=M[s[i]];
        }
            
        return sum;
        
    }
};
