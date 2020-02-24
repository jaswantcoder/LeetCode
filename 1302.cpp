/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define mp make_pair
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        queue<pair<TreeNode*,int>> q;
        int x=1;
        q.push(mp(root,x));
    
        int mx=-1,cnt=0;
        pair<TreeNode*, int> p;
        while(!(q.empty()))
        {
            ++x;
            
              p=q.front();
            q.pop();
            if(p.se==mx)
                cnt+=p.fi->val;
            else if(p.se>mx)
            {
                mx=p.se;
                cnt=p.fi->val;
            }
               if(p.fi->left)
               {
                   q.push(mp(p.fi->left,p.se+1));
               }
             if(p.fi->right)
               {
                   q.push(mp(p.fi->right,p.se+1));
               }
            
        }
        
        return cnt;
    }
  
   
};
