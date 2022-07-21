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
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>mp;
        int cur=INT_MIN;
        fn(root,mp,cur);
        for(auto i:mp) 
            if(i.second==cur) 
            {
                ans.push_back(i.first);
                cout<<i.first<<" ";
            }
        return ans;
        
    }
    int fn(TreeNode*root,unordered_map<int,int>&mp,int &cur){
        if(!root) return 0;
        int sum=fn(root->left,mp,cur)+fn(root->right,mp,cur)+root->val;
        mp[sum]++;
        cur=max(cur,mp[sum]);
        return sum;
    }
};