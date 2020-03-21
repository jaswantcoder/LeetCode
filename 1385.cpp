#define all(v)  v.begin(),v.end()

class Solution {
public:
    int findTheDistanceValue(vector<int>& a1, vector<int>& a2, int d) {
        
        int ans=a1.size();
          for(auto it: a1)
          {
              for(auto itt:a2)
              if(abs(it-itt)<=d)
              {
                  ans--;
                  break;
              }
          }
        
        
        return ans;
        
        
    }
};
