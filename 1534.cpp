class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans=0,i,n=arr.size(),j,k;
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               for(k=j+1;k<n;k++)
               {
                    int x=abs(abs(arr[i])-abs(arr[j]));
            int y=abs(abs(arr[j])-abs(arr[k]));
            int z=abs(abs(arr[k])-abs(arr[i]));
           if(x<=a && y<=b && z<=c)
                ans++;
               }
           }
       }
            
           
        
        return ans;
        
    }
};
