class Solution {
public:
    int dp[80][80][80];
    int N, M;
    bool isValid(int x, int y1, int y2){
        return (x>=0 && x<N && y1>=0 && y1<M && y2>=0 && y2<M); 
    }
    int solve(vector<vector<int>>& a, int x, int y1, int y2){
        if(!isValid(x, y1, y2)) return INT_MIN;
        if(x==(N-1)) return (y1==y2) ? a[x][y1] : (a[x][y1] + a[x][y2]);
        if(dp[x][y1][y2]!=-1) return dp[x][y1][y2];
        
        int ans = INT_MIN;
        int temp = (y1==y2) ? a[x][y1] : (a[x][y1] + a[x][y2]);
        ans = max(ans, temp+solve(a, x+1, y1, y2));
        ans = max(ans, temp+solve(a, x+1, y1, y2+1));
        ans = max(ans, temp+solve(a, x+1, y1, y2-1));
        
        ans = max(ans, temp+solve(a, x+1, y1-1, y2));
        ans = max(ans, temp+solve(a, x+1, y1-1, y2+1));
        ans = max(ans, temp+solve(a, x+1, y1-1, y2-1));
        
        ans = max(ans, temp+solve(a, x+1, y1+1, y2));
        ans = max(ans, temp+solve(a, x+1, y1+1, y2+1));
        ans = max(ans, temp+solve(a, x+1, y1+1, y2-1));
        
        return dp[x][y1][y2] = ans;
    }
    int cherryPickup(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        N = n;
        M = m;
        memset(dp,-1,sizeof(dp));
        return solve(a, 0, 0, m-1);
    }
};