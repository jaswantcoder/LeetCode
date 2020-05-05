class Solution {
public:
    int findComplement(int num) {
        int n=num,ans=1,r;
        if(!num)
            return 1;
        ans=1;
        r=1;
      while(num/2)
      {
          ans+=r*2;
          r*=2;
          num/=2;
          
      }
        return ans^n;
    
    }
};
