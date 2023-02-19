class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int current_order=1;
        while(!q.empty())
        {
          
          int n=q.size();
            vector<int>subans(n);       
                for(int i=0;i<n;i++)
                {
                   TreeNode*temp=q.front();
                    q.pop();
                    int index=current_order?i:n-1-i;
                    subans[index]=temp->val;
                    if(temp->left)
                        q.push(temp->left);
                    if(temp->right)
                        q.push(temp->right);
                }
            ans.push_back(subans);
            current_order=!current_order;
            }
         return ans;   
        }
        
    
};