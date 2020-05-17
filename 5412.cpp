class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int cnt=0,i;
        for(i=0;i<s.size();i++)

        {
            if(q>=s[i] && q<=e[i]) cnt++;
        }
        return cnt;
    }
};
