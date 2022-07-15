class Solution {
public:
    int fn(vector<vector<int>>& grid,int i,int j)
    {if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
            grid[i][j] = 0;
        return 1+fn(grid,i+1,j)+fn(grid,i,j+1)+fn(grid,i-1,j)+fn(grid,i,j-1);
         }
        return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                   ans=max(fn(grid,i,j),ans); 
            }
        }
        return ans;
    }
};