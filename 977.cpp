class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> v;
        for(auto it: A)
        {
            v.push_back(it*it);
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};
