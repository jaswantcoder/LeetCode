class Solution {
public:
    
    
    
    int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
    int sumFourDivisors(vector<int>& nums) {
        
        
        int ans=0,sum=0,cnt=0,i=0;
        for(auto it: nums)
        {
            cnt=0;sum=0;
           for(i=1;i<=sqrt(it);i++)
           {
           
               if(it% i==0)
               {
                   if(it/i==i)
                   {
                       cnt++;
                       sum+=i;
                   }
                   else{
                   cnt+=2;
                   sum+=i;
                   sum+=(it)/i;
                   }
               }
               if(cnt>4)
                   break;
           }
            if(cnt==4)
            {
                ans+=sum;
            }
        
        }
        return ans;
        
    }
};
