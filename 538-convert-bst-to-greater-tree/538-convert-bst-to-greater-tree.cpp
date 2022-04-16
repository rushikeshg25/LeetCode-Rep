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
    #define Node TreeNode
    vector<int>v;
    unordered_map<int,int>mp;
    void traverse(Node*root)
    {
        if(root==NULL)
            return ;
        traverse(root->left);
        v.push_back(root->val);
        traverse(root->right);
    }
    void traverseL(Node*root)
    {
        if(root==NULL)
            return;
        root->val=mp[root->val];
        traverseL(root->left);
        traverseL(root->right);
        return;
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL||(root->right==NULL&&root->left==NULL))
            return root;
        
        traverse(root);
        mp[v[v.size()-1]]=v[v.size()-1];
        for(int i=v.size()-2;i>=0;i--)
        {
            int k=v[i];
            v[i]=v[i+1]+v[i];
            mp[k]=v[i];
        }
        traverseL(root);
        return root;
    }
};