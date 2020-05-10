#define pb push_back
#define vi  vector<int>
#define fi first
#define se second
#define rip(i,a,b) for(i=a;i<b;i++)

class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
         vector<string> s;
        int i,j=0,k;
        j=0;
        int p=0;
     for(auto it:t)
     {
               rip(i,0,it-p-1)
                   s.pb("Push"), s.pb("Pop");
          
             
         s.pb("Push");
         p=it;
         
     }
        return s;
    }
};
