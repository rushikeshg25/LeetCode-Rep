class Solution {
public:
    int r, c;
    int dx[4] = { -1, +0, +1, +0 };
    int dy[4] = { +0, +1, +0, -1 };
    map<pair<int, int>, int> m;
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        r = matrix.size();
        c = matrix[0].size();
        int mxLen = 1;
        
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                for (int k = 0; k < 4; ++k) {
                    int a = i+dx[k];
                    int b = j+dy[k];
                    if (isSafe(a, b)) {
                        int len = dfs(a, b, matrix);
                        mxLen = max(mxLen, len);
                    }
                }
            }
        }
        
        return mxLen;
    }
    
    bool isSafe(int i, int j) {
        return i >= 0 && i < r && j >= 0 && j < c;
    }
    
    int dfs(int i, int j, vector<vector<int>>& matrix) {
        if (m.count({i, j}) > 0) {
            return m[{i, j}];
        }
        int ret = 1;
        
        for (int k = 0; k < 4; ++k) {
            int x = i + dx[k];
            int y = j + dy[k];
            
            if (isSafe(x, y) && matrix[x][y] > matrix[i][j]) {
                ret = max(ret, 1 + dfs(x, y, matrix));
            }
        }
        
        m[{i, j}] = ret;
        return ret;
    }
};
