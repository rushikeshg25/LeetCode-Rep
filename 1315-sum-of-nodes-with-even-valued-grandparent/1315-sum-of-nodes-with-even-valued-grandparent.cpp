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
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
        fn(root,ans,-1,-1);
        return ans;
    }
    
    void fn(TreeNode*root,int &ans,int parent,int grandparent){
        if(!root)return;
        if(grandparent%2==0) ans+=root->val;
        fn(root->left,ans,root->val,parent);
        fn(root->right,ans,root->val,parent);
    }
};