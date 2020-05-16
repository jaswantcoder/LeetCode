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
    
    int good(TreeNode * root, int mm)
    {
        int ans=0;
              if(!root)
                  return 0;
        mm=max(mm,root->val);
             ans+=good(root->left,mm);
        ans+=good(root->right,mm);
        if(mm<=root->val)
        {
            ans++;
        }
        return ans;
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int mm=root->val;
        return good(root,mm);
        
    }
};
