class Solution {
public:
    bool isPerfectSquare(int num) {
       int i=1;
       while(i<num/i)
           i++;
        return i==num/i? i*i==num: false;
        
    }
};
