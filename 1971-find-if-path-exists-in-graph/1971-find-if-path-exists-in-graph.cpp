class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>>mp;
        for(auto i:edges){
            mp[i[0]].push_back(i[1]);
            mp[i[1]].push_back(i[0]);
        }
        vector<bool>visited(n+1,0);
        queue<int>q;
        q.push(source);
        while(!q.empty()){
            int temp=q.front();
            visited[temp]=true;
            if(temp==destination) return true;
            q.pop();
            for(auto i:mp[temp])
                if(!visited[i]) {q.push(i);
                                 visited[i]=1;
                                }
        }
        return false;
    }
};