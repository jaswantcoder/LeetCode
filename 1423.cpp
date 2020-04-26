class Solution {
public:
    
    int dyna(vector<vector<vector<int>>> & dp , vector<int> &a , int l ,int h,int k)
    {
       
        
              if(k==0)
              {
                  return 0;
              }
        if(h-l+1<k)
            return 0;
     
       // cout<<l<<" "<<h<<" "<<k<<endl;
              
     
        
                  return dp[l][h][k];
      
        
        if(h-l+1==1)
        {
            
            dp[l][h][k]=a[l];
            return a[l];
        }
    
        dp[l][h][k]= max( a[l]+ dyna(dp,a,l+1,h,k-1), a[h]+dyna(dp,a,l,h-1,k-1));
        return dp[l][h][k];
        
    }
    int maxScore(vector<int>& a, int k) {
        int n=a.size();
        int i,sum=0;
      for(i=0;i<k;i++)
          sum+=a[i];
        int ans;
        ans=sum;
        for(i=0;i<k;i++)
        {
                 sum=sum-a[k-i-1]+a[n-1-i];
            ans=max(ans,sum);
        }
        return ans;
        
        
    }
};
