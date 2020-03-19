#define pb push_back
class Solution {
public:
    int i;
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(i=1;i<=n;i++)
            if(i%15==0)
                v.pb("FizzBuzz");
           else if(i%5==0)
                   v.pb("Buzz");
        else if(i%3==0)
            v.pb("Fizz");
        else
        v.pb(to_string(i));
        
        return v;
    }
};
