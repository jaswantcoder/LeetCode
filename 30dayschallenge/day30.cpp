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
    bool check(TreeNode * root, vector<int> a,int i)
    {
    
        if(i>=a.size() || !root)
            return false;
          if(i==a.size()-1  && root && root->val==a[i] && ! root->left && ! root->right)
              return true;
       
    if(!root)
        return false;
            if(root->val==a[i])
            {
                  return check(root->left,a,i+1) || check(root->right,a,i+1);
                
            }
        return false;
    }
    
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
       if(arr.size()==0)
           return true;
       if(!root)
        return false;
     
     return check(root,arr,0);
        
    }
};
