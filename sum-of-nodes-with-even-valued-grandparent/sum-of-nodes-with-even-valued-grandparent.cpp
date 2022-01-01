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
    void fn(TreeNode*root,int&ans)
    {
     if(root){
            if(root->val%2==0 and root->left and root->left->left)
                ans+=root->left->left->val;
            if(root->val%2==0 and root->left and root->left->right)
                ans+=root->left->right->val;
            if(root->val%2==0 and root->right and root->right->left)
                ans+=root->right->left->val;
            if(root->val%2==0 and root->right and root->right->right)
                ans+=root->right->right->val;
         fn(root->left,ans);
        fn(root->right,ans);
     }
        
    
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        fn(root,sum);
        return sum;
    }
};