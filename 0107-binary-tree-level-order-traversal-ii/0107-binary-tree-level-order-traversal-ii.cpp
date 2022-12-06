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
    void levelOrder(vector<vector<int>> &ans, TreeNode *node, int level) {
    if (!node) return;
    if (level >= ans.size())
        ans.push_back({});
    ans[level].push_back(node->val);
    levelOrder(ans,node->left,level+1);
    levelOrder(ans,node->right,level+1);
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> ans;
    levelOrder(ans,root,0);
    reverse(ans.begin(),ans.end());
    return ans;
}
};