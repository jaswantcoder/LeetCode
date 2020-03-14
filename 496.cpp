#define ll long long
#define pb push_back

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v2) {
        
        int mn,ans;
        bool f;
        vector<int> v;
        for(auto it:v1)
        {
            f=false;
            mn = 1001;
            for(auto itt: v2)
            {
                if(itt==it)
                    f=true;
              if( itt>it && f)
              {
                  mn=itt;
                  break;
              }
            }
            if(mn==1001)
                v.pb(-1);
            else
                v.pb(mn);
        }
        return v;
        
    }
};
