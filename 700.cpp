/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int key) {
              if(root==NULL)
                  return NULL;
            if(key==root->val)
                return root;
        if(root->val > key)
            return searchBST(root->left,key);
        return searchBST(root->right,key);
        
    }
};
