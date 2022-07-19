class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return help(root, LONG_MIN, LONG_MAX);
    }
    
    bool help(TreeNode* root, long min, long max){
        if(!root)   return true;
        if(root->val <= min || root->val >= max)  return false;
        return help(root->left, min, root->val) && help(root->right, root->val, max);
    }
};