class Solution {
public:
   double champagneTower(int poured, int query_row, int query_glass) {
        double res[query_row+1][query_glass+2];
        memset(res,0,sizeof(res));  // res[i][j]=0
        res[0][0]= poured;
        for (int i = 0; i < query_row; i++) {
            for (int j = 0; j <= query_glass; j++) {
                double x=max(0.0,(res[i][j]-1.0)/2.0);
                res[i+1][j]+=x;
                res[i+1][j+1]+=x;
            }
        }
        return min(1.0,res[query_row][query_glass]); 
    }
};