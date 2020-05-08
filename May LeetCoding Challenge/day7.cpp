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
#define se second
#define fi first
#define mp make_pair
#define ii pair<int,int>
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
pair<int,int>a[3];
        int i=2;
        queue<pair<TreeNode*,pair< int,int>>> q;
        q.push(mp(root,mp(0,0)));
        while(!q.empty())
        {
            pair<TreeNode*, pair<int,int>> p=q.front();
            q.pop();
            if(p.fi->val==x || p.fi->val==y )
            {
              a[i--]=mp(p.se.fi,p.se.se);
            }
            if(!i)
                break;
            if(p.fi->right)
                q.push(mp(p.fi->right,mp(p.fi->val,p.se.se+1)));
             if(p.fi->left)
                q.push(mp(p.fi->left,mp(p.fi->val,p.se.se+1)));
        }
        if(!i)
      return  a[1].se==a[2].se && a[1].fi != a[2].fi;
        return false;
        
        
    }
};
