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
    int maxAncestorDiff(TreeNode* root) {
        if(!root) return 0;
        int ans=0;
        getdiff(root,ans,INT_MAX,0);
        return ans;    
    }
    
    void getdiff(TreeNode*root,int &ans,int mi,int mx)
    {
        if(!root) return ;
        mx=max(mx,root->val);
        mi=min(mi,root->val);
        ans=max(ans,mx-mi);
        getdiff(root->left,ans,mi,mx);
        getdiff(root->right,ans,mi,mx);
    }
};