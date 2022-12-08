class Solution {
public:
bool validateBST(TreeNode* root, long min, long max)
{
if(root == NULL)
return true;

    if(root->val < min || root->val > max)
        return false;
    long currVal = (long)root->val;
    return validateBST(root->left, min, currVal-1) && validateBST(root->right, currVal+1, max);
}

bool isValidBST(TreeNode* root) {
    return validateBST(root, LONG_MIN, LONG_MAX);    
}
};