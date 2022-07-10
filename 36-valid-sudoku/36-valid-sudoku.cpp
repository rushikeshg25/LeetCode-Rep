class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<int> seen;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int n = board[i][j] - '0';
                    if (!seen.insert(cantor(n, i)).second || 
                        !seen.insert(cantor(n, j + 9)).second ||
                        !seen.insert(cantor(n, i / 3 * 3 + j / 3 + 18)).second) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
private:
    int cantor(int x, int y) {
        return ((x + y) * (x + y + 1)) / 2 + y;
    }
};