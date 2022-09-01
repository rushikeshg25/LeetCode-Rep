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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        
        return fn(root,root->val);
    }
    int fn(TreeNode*root,int cur){
        if(!root) return 0;
        int ans=0;
        if(cur<=root->val){
            cur=root->val;
            ans++;
        }
        return ans+fn(root->left,cur)+fn(root->right,cur);
    }
    
};