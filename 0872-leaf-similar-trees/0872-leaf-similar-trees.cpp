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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>one,two;
        fn(root1,one);
        fn(root2,two);
        return one==two;
    }
    
    void fn(TreeNode*root,vector<int>&a){
        if(!root) return;
        if(!root->right & !root->left) a.push_back(root->val);
        fn(root->left,a);
        fn(root->right,a);
    }
};