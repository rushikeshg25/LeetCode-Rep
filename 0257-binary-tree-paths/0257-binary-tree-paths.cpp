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
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return {};
        vector<string>ans;
        fn(root,ans,to_string(root->val));
        
        return ans;
    }
    
    void fn(TreeNode*root,vector<string>&ans,string path){
        if(!root->left && !root->right) {
            ans.push_back(path);
            return;
        }
        if(root->left)fn(root->left,ans,path+"->"+to_string(root->left->val));
        if(root->right)fn(root->right,ans,path+"->"+to_string(root->right->val));
    }
};