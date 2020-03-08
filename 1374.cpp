class Solution {
public:
    string generateTheString(int n) {
        string s="";
        if(n==0)
            return s;
            
        if(n&1)
        {
            while(n--)
                s+='a';
        }
        else{
            s+='a';
            n--;
            while(n--)
                s+='b';}
      return s;   
    }
};
