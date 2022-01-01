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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        stack<TreeNode*>s;
        for(auto i:nums)
        {
            TreeNode*temp=new TreeNode(i);
            while(!s.empty() && s.top()->val<temp->val)
            {
                temp->left=s.top();
                s.pop();
            }
            if(!s.empty())
            {
                s.top()->right=temp;
              
            }
            s.push(temp);
        }
        while(s.size()>1)
        {
            s.pop();
        }
        return s.top();
    }
};