// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
       queue<pair<int,int>>q;
        int total=0,time=0,final_rotten=0;
        int m=grid.size();
        int n=grid[0].size();
        if(grid.empty()) return 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==2) q.push(make_pair(i,j));
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {
            int k=q.size();
            final_rotten+=k;
            while(k--)
            {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
              int nx=x+dx[i];
              int ny=y+dy[i];
                if(nx<0 || nx>=m || ny<0 || ny>=n || grid[nx][ny]!=1) continue;
                q.push(make_pair(nx,ny));
                grid[nx][ny]=2;
            }        
        }
            if(!q.empty())time++;
        }
        
        if(total==final_rotten) return time;
        else return -1;
    
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends