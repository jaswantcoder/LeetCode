/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
#define pb push_back
class Solution {
public:
    
    vector<int> v;
    vector<int> preorder(Node* root) {
        
        
        if(root)
        {
            v.pb(root->val);
            for(auto it:root->children)
                preorder(it);
        }
       return v;
       
        
    }
    
};
