class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=0;
        long long first;
        long long last;
        while(!q.empty())
        {
            long long n=q.size();
            long long min_index=q.front().second;
            for(int i=0;i<n;i++)
            {
            auto temp=q.front();
                TreeNode*p=temp.first;
                 long long cur=temp.second-min_index;
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