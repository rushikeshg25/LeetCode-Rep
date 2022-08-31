class Solution
{

	void bfs(vector<vector<int>> &h, queue<pair<int, int>> q, int n, int m, vector<vector<int>> &visi)
	{
		int ar1[] = {0, 0, 1, -1};
		int ar2[] = {1, -1, 0, 0};
		while (!q.empty())
		{
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int i = 0; i < 4; i++)
			{
				int xn = x + ar1[i];
				int yn = y + ar2[i];
				if (xn < 0 || yn < 0 || xn >= n || yn >= m || visi[xn][yn] == 1)
					continue;
				if (h[x][y] <= h[xn][yn])
					q.push({xn, yn}), visi[xn][yn] = 1;
			}
		}
	}

public:
	vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
	{
        int n = heights.size();
		int m = heights[0].size();
		vector<vector<int>> visi1(n, vector<int>(m, 0)); 
		vector<vector<int>> visi2(n, vector<int>(m, 0)); 

		queue<pair<int, int>> q;
		// STEP-1
		for (int i = 0; i < m; i++)
			q.push({0, i}), visi1[0][i] = 1;
		for (int j = 0; j < n; j++)
			q.push({j, 0}), visi1[j][0] = 1;

		bfs(heights, q, n, m, visi1); 
		while (!q.empty())
			q.pop();
		// STEP-2
		for (int i = 0; i < m; i++)
			q.push({n - 1, i}), visi2[n - 1][i] = 1;
		for (int j = 0; j < n; j++)
			q.push({j, m - 1}), visi2[j][m - 1] = 1;

		bfs(heights, q, n, m, visi2); 
		vector<vector<int>> ans;	 

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				if (visi1[i][j] == visi2[i][j] and visi1[i][j] == 1)
					ans.push_back({i, j});
		}
		return ans;
	}
};