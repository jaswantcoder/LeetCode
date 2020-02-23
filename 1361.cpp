class Solution {
public:
    
    
    bool validateBinaryTreeNodes(int n, vector<int>& leftc, vector<int>& rightc) {
        
       vector <bool> v(n,false);
        int root =0;
      bool ans= check(v,leftc,rightc,n,root);
        for(int i=0;i<n;i++)
            if(!v[i])
            return false;
        return ans;
    }
    bool check(vector<bool>& v, vector<int>& l,vector<int>& r,int n,int node)
    {
        if(node==-1)
            return true;
           if(!v[node])
               v[node]=true;
        else
            return false;
        bool ans1=true,ans2=true;
        if(l[node]!=-1)
          ans1= check(v,l,r,n,l[node]);
        if(r[node]!=-1)
           ans2= check(v,l,r,n,r[node]);
        return ans1 && ans2;
        
        
        
    }
};
