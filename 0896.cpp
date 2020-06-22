class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int i, n=A.size(),in=0,dec=0;
        for(i=0;i<n-1;i++)
        {
            if(A[i]<A[i+1])
                in++;
            else if(A[i]>A[i+1])
                dec++;
            else 
            {
                in++; dec++;
            }
        }
        if(in==n-1 || dec==n-1)
        {
            return true;
        }
        return false;
        
    }
};
