class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        bool col0=false,row0=false;
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++){
        if(a[i][0]==0) {
            col0=true;
            break;
        }
        }
        
        for(int i=0;i<m;i++){
        if(a[0][i]==0) {
            row0=true;
            break;
        }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]==0){
                    a[i][0]=0;
                    a[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][0]==0 || a[0][j]==0)
                    a[i][j]=0;
            }
        }
        
        if(row0){
            for(int j=0;j<m;j++) a[0][j]=0;
        }
        
        if(col0){
            for(int i=0;i<n;i++) a[i][0]=0;
        }
    }
 };