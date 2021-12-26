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
    void fn(TreeNode*root,int &ans)
    {
        if(!root) return;
        
        fn(root->left,ans);
        ans++;
        fn(root->right,ans);
    }
    int countNodes(TreeNode* root) {
        int ans=0;
        fn(root,ans);
        return ans;
    }
};