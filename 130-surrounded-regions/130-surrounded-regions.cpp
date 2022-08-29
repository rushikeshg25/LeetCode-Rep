class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
           if(board[i][0]=='O' && !visited[i][0]) fn(board,visited,i,0,m,n);
           if(board[i][n-1]=='O' && !visited[i][n-1]) fn(board,visited,i,n-1,m,n);
        }
        for(int j=0;j<n;j++){
           if(board[0][j]=='O' && !visited[0][j]) fn(board,visited,0,j,m,n);
           if(board[m-1][j]=='O' && !visited[m-1][j]) fn(board,visited,m-1,j,m,n);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0 && board[i][j]!='X') board[i][j]='X';
            }
        }
    }
    void fn(vector<vector<char>>& board,vector<vector<int>>&visited,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='X' || visited[i][j]==1) return;
        visited[i][j]=1;
        
        fn(board,visited,i+1,j,m,n);
        fn(board,visited,i-1,j,m,n);
        fn(board,visited,i,j+1,m,n);
        fn(board,visited,i,j-1,m,n);

    }
};