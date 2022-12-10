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
    int maxProduct(TreeNode* root) {
        long long totalsum=sum(root);
        long long ans=0;
        fn(root,ans,totalsum);
        return ans%int(1e9+7);
    }
    long long sum(TreeNode*root){
        if(!root) return 0;
        return root->val+sum(root->left)+sum(root->right);
    }
    //PostOrder traveral to find sum of all components 
    long long fn(TreeNode*root,long long &ans,int totalsum){
        if(!root) return 0;
        long long cur=root->val+fn(root->left,ans,totalsum)+fn(root->right,ans,totalsum);
        ans=max(ans,cur*(totalsum-cur));
        return cur;
    }
};