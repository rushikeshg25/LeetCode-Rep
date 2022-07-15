class Solution {
public:
    void fn(vector<vector<char>>&grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0') return;
        grid[i][j]='0';
        fn(grid,i+1,j);
        fn(grid,i,j+1);
        fn(grid,i-1,j);
        fn(grid,i,j-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1')
                {    ans++;
                     fn(grid,i,j);
                }
                
            }
        }
        return ans;
    }
};