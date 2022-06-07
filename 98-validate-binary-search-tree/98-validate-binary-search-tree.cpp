class Solution {
public:
     void valid(TreeNode* root, TreeNode* &prev, int& flag){
        
        if(root==NULL) return;
        valid(root->left,prev,flag);
        if( prev!=NULL && root->val <= prev->val)
        {
            flag=0;
            return;
        }
        prev=root;
        valid(root->right,prev,flag);
    }
    bool isValidBST(TreeNode* root) {
        int flag=1;
        TreeNode* prev=NULL;
        valid(root,prev,flag);
        return flag;
    }
    
   
};