class Solution {
public:
    vector<int> v1[1001];
    bool IsVisited[1001];
    void bfs(int i , int j)
    {
        queue<int> q1;
        q1.push(i);
        while(!q1.empty())
        {
            int a = q1.front();
            q1.pop();
            IsVisited[a]=true;
            for(auto x : v1[a]){
            if(IsVisited[x])continue;
            if((a == i && x == j) || (a == j && x == i))continue;
            q1.push(x);
            }
        }
        return;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n = edges.size();
    
   for(auto x : edges)
   {
       v1[x[0]].push_back(x[1]);
       v1[x[1]].push_back(x[0]);
   }
    for(int i = n-1 ; i >= 0 ; i--)
    {
        for(int j = 0 ; j <= n ; j++)IsVisited[j]=false;
        bfs(edges[i][0]   , edges[i][1]);int j;
        for(j = 1 ; j <= n ; j++)if(!IsVisited[j])break;
        if(j==n+1)return edges[i];
    }
        return edges[0];
    }
};