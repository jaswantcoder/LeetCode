class Solution {
public:
    int reverse(int x) {
        int n=0,l; bool f=false;
        if(x<0)
            f=true;
        int r=1;
        r=1<<30;
        l=-r;
        r--;
       while(x)
       {
           n=n*10+(x%10);
           x/=10;
          if((n<l/10)|| n>r/10)
             return 0; 
       }
      //  if(f)
          //  n=-n;
            
        return n;
    }
};
