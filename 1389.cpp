class Solution {
public:
    vector<int> createTargetArray(vector<int>& nms, vector<int>& in) {
        
        vector<int> t;
        int i;
        for(i=0;i<nms.size();i++)
        {
            t.insert(t.begin()+in[i],nms[i]);
        }
        return t;
        
    }
};
