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
    int fn(TreeNode*root,int &ans)
    {
        if(!root) return 0;
        int l=max(0,fn(root->left,ans));
        int r=max(0,fn(root->right,ans));
        ans=max(ans,root->val+l+r);
        
        return root->val+max(l,r);
        
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        fn(root,ans);
        return ans;
    }
};