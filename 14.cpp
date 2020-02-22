class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int j=0,i,k;
        string s="";
        if(str.size()==0)
            return s;
        k=str[0].size();
        for(auto it: str)
        {
            j=0;
            for(i=0;i<it.size();i++)
            {
                
                if(it[i]!=str[0][i])
                    break;
                j++;
            }
            k=min(k,j);
        }
        if(k==0)
            return s;
        cout<<k<<" ";
    string sa(str[0].begin(),str[0].begin()+k);
        return sa;
    }
};
