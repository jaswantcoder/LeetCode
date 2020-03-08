class Solution {
public:
    int numTimesAllBlue(vector<int>& l) {

        int a[l.size()+1]={0},i,ans=0; 
        int mm=l[0];
       for(i=0;i<l.size();i++)
       {
          mm=max(mm,l[i]);
           if(mm==i+1)
               ans++;
       }
        return ans;
        
    }
};
