#include<set>
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
             map<int,int> m;
        for(auto it:arr)
        {
            m[it]++;
        }
        for(auto it:arr)
        {
            
            if(m[it*2]>0) 
                if((it==0?m[it]>1:0) || it!=0)
                return true;
            
                    }
        return false;
    }
};
