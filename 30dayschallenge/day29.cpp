/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
     static inline int m=INT_MIN;
    Solution()
    {
        m=INT_MIN;
    }
      int func(TreeNode*root){
        
        if(root==NULL){
            return 0;
        }
        
        int l=max(func(root->left),0);
        int r=max(func(root->right),0);
        
        m=max(l+r+root->val,m);
        
        return max(l,r)+root->val;
        
    }
    
  
    int maxPathSum(TreeNode* root) {
        
        if(root==NULL)
        {
         return 0;
        }
        m=INT_MIN;
        int x=func(root);
        return m;
        
    }
};

  /*
    
    public int maxPathSum(TreeNode root) {
        
        if(root==null){
            return 0;
        }
        
        max=Integer.MIN_VALUE;
        int x=func(root);
        return max;
    }
    */

