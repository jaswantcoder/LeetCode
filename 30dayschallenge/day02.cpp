class Solution {
public:
    bool isHappy(int n) {
     
        if(n==1) return true;
        set<int> s;
        int a;
        while(1)
        {
            a=0;
            while(n)
            {
                a+=(n%10) * (n%10);
                n/=10;
            }
            n=a;
            if(s.find(a)==s.end())
                s.insert(a);
            else
                break;
            
        }
        return n==1;
            
        
    }
};
