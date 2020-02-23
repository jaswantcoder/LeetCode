

#define pb push_back
class Solution {
public:
    vector<int> closestDivisors(int num) {
                int mid= int(sqrt(num));
        vector<int> v;
        if((mid+1)*(mid+1)==num+1 || (mid+1)*(mid+1)==num+2)
        {
            v.pb(mid+1);v.pb(mid+1);
            return v;
        }
        
        int a1=mid,a2=mid;
        while(a1*a2 !=num+1 && a1*a2!=num+2 && a1>0)
        {
            if(a1*a2<num+1)
                a2++;
            if(a1*a2>num+2)
                a1--;
        }
     v.pb(a1);
        v.pb(a2);
        
        
        return v;
    }
};
