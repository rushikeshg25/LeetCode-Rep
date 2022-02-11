class Solution {
public:
    bool issafe(vector<string>&cur,int row,int col ,int n){
        int c=col,r=row;
        while(row>=0 && col>=0) {
          if(cur[row][col]=='Q') return false;
          row--;
        col--;
            
        }
        col=c;
        row=r;
        while(row<n && col>=0) {
          if(cur[row][col]=='Q') return false;
          row++;
        col--;
            
        }
        col=c;
        row=r;
        while(col>=0){
             if(cur[row][col]=='Q') return false;
             col--;
        }
        return true;
    }
    void fn(vector<vector<string>>&ans,vector<string>&cur,int n,int col){
     if(col==n) {
         ans.push_back(cur);
         return;
     }
        for(int row=0;row<n;row++)
        {
            if(issafe(cur,row,col,n)){
               cur[row][col]='Q';
               fn(ans,cur,n,col+1);
               cur[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>cur;
        string s(n,'.');
        for(int i=0;i<n;i++) cur.push_back(s);
        fn(ans,cur,n,0);
        return ans;
    }
};