class Solution {
public:
     int shortestPathLength(vector<vector<int>>& graph) {
		int n = graph.size();
		int goal = (1 << n) - 1;
		queue<pair<int, int>> q;
		vector<vector<int>> vis(n, vector<int>(1 << n));
		for (int i = 0; i<n; i++)
			q.push({ i,1 << i });
		int step = 0;
		while (!q.empty())
		{
			int sz = q.size();
			for (int i = 0; i<sz; i++)
			{
				auto p = q.front();
				q.pop();
				int state = p.first;
				int visited = p.second;
				if (visited == goal) return step;
				if (vis[state][visited]) continue;
				vis[state][visited] = 1;
				for (auto node : graph[state])
				{

					q.push({ node,visited | (1 << node )});

				}




			}

			step++;


		}
		return step;


	}
};