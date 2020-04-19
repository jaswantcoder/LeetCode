class Solution {
public:
    int search(vector<int>& nums, int target) {
          if (nums.size() == 0) return -1;
        int l = 0, r = nums.size()- 1;
        while (l < r)
        {
            cout<<l<<" "<<r<<endl;
            int m = (r - l) / 2 + l;
            cout<<"m="<<m<<endl;
            if (nums[m] == target) return m;
            if (nums[l] <= nums[m])
            {
                if (target < nums[m] && target >= nums[l])
                {
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            else
            {
                if (target > nums[m] && target <= nums[r])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                    
                }
                
            }
            cout<<l<<" "<<r<<endl;
        }

        return target == nums[l] ? l : -1;
    }
};
