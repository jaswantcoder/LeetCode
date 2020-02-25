class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
   
        if(!arr.size())
            return arr;
        int n=arr.size();
  int l=arr[n-1],r,i;
        arr[n-1]=-1;
        for(i=n-2;i>=0;i--)
        {
            
          r=max(l,arr[i]);
            arr[i]=l;
            l=r;
        }
        return arr;
        
    }
};
