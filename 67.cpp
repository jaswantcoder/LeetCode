class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int aIdx = a.length() - 1;
        int bIdx = b.length() - 1;
        
        int sum = 0;
        int carry = 0;
        while(aIdx >= 0 and bIdx >= 0) {
            sum = (a[aIdx] - '0') + (b[bIdx] - '0') + carry;
            res.append(to_string(sum % 2));
            carry = sum / 2;
            aIdx--;
            bIdx--;
        }
        while(aIdx >= 0) {
            sum = (a[aIdx] - '0') + carry;
            res.append(to_string(sum % 2));
            carry = sum / 2;
            aIdx--;
        }
        while(bIdx >= 0) {
            sum = (b[bIdx] - '0') + carry;
            res.append(to_string(sum % 2));
            carry = sum / 2;
            bIdx--;
        }
        if(carry) {
            res.append(to_string(carry));
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
