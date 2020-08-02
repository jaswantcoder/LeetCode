class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int i,prev=arr[0],cnt=0;
        for(i=1;i<arr.size();i++)
        {
        if(arr[i]<prev)
        {
            cnt++;
        }
            else
               { cnt=1;prev=arr[i];}
            if(cnt==k)
                return prev;
        }
        
        return *max_element(arr.begin(),arr.end());
   
    }
        
    
};
