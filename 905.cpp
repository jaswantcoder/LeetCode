class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
       int i=0,j=A.size()-1;
        vector<int> a(A.size());
        for(auto it: A)
        {
            if(it&1)
                a[j--]=it;
            else
                a[i++]=it;
        }
     return a;   
    }
};
