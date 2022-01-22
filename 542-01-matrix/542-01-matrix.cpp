class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>>Q;
        int m = mat.size();
        int n = mat[0].size();
        if(n==0) return {{}};
        
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(mat[i][j]==0) Q.push({i,j});
        
        
        vector<vector<int>>result(m,vector<int>(n,0));
        int rowOffset[] = {0,0,1,-1};
        int colOffset[] = {1,-1,0,0};
        int cx,cy,tx,ty;
        int l = -1;
        while(!Q.empty())
        {
            l++;
            int k = Q.size();
            
            while(k--)
            {
                cx = Q.front().first;
                cy = Q.front().second;
                Q.pop();
                for(int p=0;p<4;p++)
                {
                    tx = cx + rowOffset[p];
                    ty = cy + colOffset[p];
                    if(tx<m && tx>=0 && ty<n && ty>=0 && mat[tx][ty]==1 && result[tx][ty]==0)
                    {
                        result[tx][ty] = l+1;
                        Q.push({tx,ty});
                    }
                } } }
        
        return result;
    }
};