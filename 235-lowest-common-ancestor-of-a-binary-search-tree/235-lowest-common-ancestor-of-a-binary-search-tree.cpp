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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* r) {
        if(!root) return root;
        int large=max(p->val,r->val);
        int small=min(p->val,r->val);
        while(root)
        {
            if(root->val>large && root->val>small)
                root=root->left;
            else if(root->val<large && root->val<small)
                root=root->right;
            else
                return root;
        }
        return root;
    }
};