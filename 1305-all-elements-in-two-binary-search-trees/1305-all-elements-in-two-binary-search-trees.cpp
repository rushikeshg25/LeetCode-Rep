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
private:
    void fn(TreeNode*root,vector<int>&ans)
    {
        if(!root) return;
        ans.push_back(root->val);
        fn(root->left,ans);
        fn(root->right,ans);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        fn(root1,ans);
        fn(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};