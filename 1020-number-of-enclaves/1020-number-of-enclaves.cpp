class Solution {
public:
    int d[5]={0,-1,0,1,0};
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        if(m==1 || n==1){
            return 0;
        }
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            if(grid[i][0]==1 && !visited[i][0]) dfs(grid,visited,i,0,m,n);
            if(grid[i][n-1]==1 && !visited[i][n-1]) dfs(grid,visited,i,n-1,m,n);
        }
        
        for(int j=0;j<n;j++){
            if(grid[0][j]==1 && !visited[0][j]) dfs(grid,visited,0,j,m,n);
            if(grid[m-1][j]==1 && !visited[m-1][j]) dfs(grid,visited,m-1,j,m,n);

        }
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               // cout<<visited[i][j]<<" ";
                if(grid[i][j]==1 && visited[i][j]==0) ans++;
            }
           // cout<<endl;
        }
     //   cout<<endl;
        return ans;
        
    }
    
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || visited[i][j]==1 || grid[i][j]==0) return;
        visited[i][j]=1;
        int newx,newy;
        for(int k=1;k<5;k++){
            newx=i+d[k-1];
            newy=j+d[k];
            dfs(grid,visited,newx,newy,m,n);
        }
    }
};