class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>> adjList(n);
        for(int i=0; i<flights.size(); i++){
            adjList[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        queue<pair<int, int>> q;
        q.push({src, 0});
        int minCost = INT_MAX;
        vector<int> dp(n, INT_MAX);
        dp[src] = 0;
        while(!q.empty() && k>= -1){
            int nodeCount = q.size();
            while(nodeCount--){
                auto cur = q.front();
                q.pop();
                if (cur.first == dst){
                    minCost = min(minCost, cur.second);
                    continue;
                }
                for(auto next: adjList[cur.first]){
                    if (cur.second + next.second <= dp[next.first]){
                        q.push({next.first, cur.second + next.second});
                        dp[next.first] = cur.second + next.second;
                    }
                }
            }
            k--;
        }
        return minCost == INT_MAX ? -1: minCost;
    }
};