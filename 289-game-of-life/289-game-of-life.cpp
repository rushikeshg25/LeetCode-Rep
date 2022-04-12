class Solution {
public:
   void gameOfLife(vector<vector<int>>& board) {
        int n = board.size(), m=board[0].size();
        vector<vector<int>> res(n, vector<int>(m,0));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int count=0;
                if(i-1 >= 0 && j-1 >=0 && board[i-1][j-1] == 1) count++;
                if(i-1 >=0 && board[i-1][j] == 1) count++;
                if(i-1 >= 0 && j+1 < m && board[i-1][j+1] == 1) count++;
                if(j-1 >= 0 && board[i][j-1] == 1) count++;
                if(j+1 < m && board[i][j+1] == 1) count++;
                if(i+1 < n && j-1 >= 0 && board[i+1][j-1] == 1) count++;
                if(i+1 < n && board[i+1][j] == 1) count++;
                if(i+1 < n && j+1 < m && board[i+1][j+1] == 1) count++;
                
                if(board[i][j] == 1 && count == 2 || count == 3) res[i][j] = 1;
                else if(board[i][j] == 0 && count == 3) res[i][j] = 1;
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                board[i][j] = res[i][j];
            }
        }
   }
};