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
    
    TreeNode* temp(int key)
    {
        TreeNode*t= (TreeNode*)malloc(sizeof(TreeNode));
        t->val=key;
        t->left=NULL;
        t->right=NULL;
        return t;
        
    }
    void addparent(TreeNode* root, int key)
    {
        if(root->val >key )
        {
            if(root->left == NULL)
                root->left= temp(key);
            else addparent(root->left, key);
            return;
        }
        if(root->right==NULL)
        {
                    root->right= temp(key);
        } else addparent(root->right,key);
        }
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
             
        TreeNode* root=NULL;
     
    for(auto key: preorder)
    {
        if(root==NULL)
            root=temp(key);
        else
        {
            addparent(root,key);
            
        }
        
    }
        return root;
        
        
        
    }
};
