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
    int sum=0;
    int height(TreeNode*root)
    {
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    void dfs(TreeNode*root,int n)
    {
        if(!root) return;
        if(n==1 && root->left==NULL && root->right==NULL)
            sum+=root->val;
        dfs(root->left,n-1);
        dfs(root->right,n-1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int n=height(root);
        
        dfs(root,n);
        return sum;
    }
};