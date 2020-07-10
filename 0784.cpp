class Solution {
public:
    void util(string &s, int pos, string subres, vector<string> &res) {
        if(pos == s.size())
            res.push_back(subres);
        if(pos >= s.size())
            return;
        if(isdigit(s[pos]))
            util(s, pos + 1, subres + string(1, s[pos]), res);
        else {
            util(s, pos + 1, subres + string(1, tolower(s[pos])), res);
            util(s, pos + 1, subres + string(1, toupper(s[pos])), res);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        util(s, 0, "", res);
        return res;
    }
};
