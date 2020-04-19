class Solution {
public:
    int search(vector<int>& nums, int t) {
       int l=0, r=nums.size()-1,m;
    //    cout<<"r="<<r<<endl;
        if(nums.size()==0)
return -1;
        while(l<r)
            {
            cout<<l<<" "<<r<<endl;
            m=l+(r-l)/2;
            
            if(t==nums[m])
                return m;
            if(nums[l]<nums[m])
            {
                   if(t>=nums[l] && t<=nums[m-1])
                      r=m-1;
                else l=m+1;
                
            }
            else 
            {
                if(t>=nums[m+1] && t<=nums[r])
                {
                    l=m+1;
                }
                else r=m-1;
                
            }
            
            
            
        }
        cout<<endl<<l<<" "<<r<<endl;
        return t==nums[l]?l:-1;
    }
};
