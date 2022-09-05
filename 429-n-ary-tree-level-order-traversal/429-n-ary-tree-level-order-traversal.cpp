/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>subans;
            for(int i=0;i<n;i++){
                Node*temp=q.front();
                q.pop();
                subans.push_back(temp->val);
                for(Node* child:temp->children){
                    q.push(child);
                }
            }
            ans.push_back(subans);
        }
        return ans;
    }
};