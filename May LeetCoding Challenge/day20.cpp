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

#define pii pair<int,int>
#define mp make_pair
#define se second
#define fi first

class Solution {
public:
    
    
    pair<int,int> num(TreeNode* root, int k, int &cnt)
    {
        
        
        if(!root)
            return mp(cnt,0);
         pii p = num(root->left, k, cnt);
     if(p.se)
     {
         return p;
     }
        else if(p.fi==k-1)
        {
            return mp(k,root->val);
        }
        cnt=p.fi+1;
        p = num(root->right, k,cnt);
         return p;
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
     int cnt=0;
        return num(root,k,cnt).se;
        
                 
        
    }
};
