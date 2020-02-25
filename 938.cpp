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
    int rangeSumBST(TreeNode* root, int l, int r) {
        return sum(root, l, r);
    }
    int sum(TreeNode * root,int l, int r)
    {
        if(root)
        {
            cout<<root->val<<endl;
            if((root->val) >=l && (root->val)<=r)
                return root->val + sum(root->left,l,r)+ sum(root->right,l,r);
              return sum(root->left,l,r)+ sum(root->right,l,r);
        }
        return 0;
    }
};
