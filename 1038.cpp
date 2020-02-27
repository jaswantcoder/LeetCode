/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define all(v) v.begin(),v.end()
class Solution {
public:
    map<int,int> m;
    vector<int> v;
      void sum(TreeNode* root)
    {
        if(root)
        {
             v.push_back(root->val);
            sum(root->left);
            sum(root->right);
        }
    }
     void greater(TreeNode* root)
    {
         if(root)
         {
             root->val = m[root->val];
             greater(root->left);
             greater(root->right);
         }
      
    }
    TreeNode* bstToGst(TreeNode* root) {
         sum(root);
        int i;
        sort(all(v));
        int sm=0;
       for(i=v.size()-1;i>=0;i--)
       {
          m[v[i]]=sm+v[i];
          sm+=v[i];
       }
        greater(root);
        return root;
    }
    
  
   
};
