
#define MAX 100007
class Solution {
public:
    
    
    
    bool jump(vector<int> &a, int  q,bool vis[])
    {
        int n=a.size();
        int l,r,i;
        vis[q]=true;
      
          
          l=q-a[q]>=0?q-a[q]:0;
                r=q+a[q]<n?q+a[q]:n-1;
        if(r==n-1)
            return true;
                for(i=l;i<=r;i++)
                {
                    if(!vis[i])
                    {
                        
                       if(jump(a,i,vis))
                           return true;
                    }
                }
        return false;
        
    }
    bool canJump(vector<int>& a) {
        
      int n=a.size();
        bool vis[MAX]={false};
       if( jump(a,0,vis))
           return true;
        return false;
        
        
        
    }
};
