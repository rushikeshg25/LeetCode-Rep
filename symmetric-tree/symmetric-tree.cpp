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
    bool fn(TreeNode*l,TreeNode*r)
    {
        if(l==NULL || r==NULL) return l==r;
         if(l->val!=r->val) return false;
        
        return (fn(l->right,r->left) && fn(l->left,r->right));
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        return fn(root->left,root->right);
    }
};