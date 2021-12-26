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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        int first;
        int last;
        while(!q.empty())
        {
            int n=q.size();
            int min_index=q.front().second;
            for(int i=0;i<n;i++)
            {
            auto temp=q.front();
                TreeNode*p=temp.first;
                int cur=temp.second-min_index;
            q.pop();
                if(i==0) first=temp.second;
                if(i==n-1) last=temp.second;
            if(p->left) q.push({p->left,cur*2+1});
            if(p->right)q.push({p->right,cur*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
        
    }
};