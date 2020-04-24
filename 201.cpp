class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        
        int r=n;
        while(r>m && r<= n)
        {
            r-=(r & -r);
        }
     
        return r;
    }
};
