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
    
      int mn=0;   
   
    int len(TreeNode * root)
    {
         int l,r;
        if(!root)
            return 0;
    
            l=len(root->left);
        r=len(root->right);
               if(l+r>mn)
                   mn=l+r;
        cout<<"value="<<root->val<<" "<<l<<" "<<r<<"returning"<<max(l,r)+1<<endl;
        return max(l,r)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
    
        if(!root)
            return 0;
         len(root);
      
        return mn;
          
    }
};
