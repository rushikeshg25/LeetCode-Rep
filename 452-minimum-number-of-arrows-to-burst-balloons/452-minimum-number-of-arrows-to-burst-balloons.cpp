class Solution {
public:
    bool static sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] < v2[1];
}
    int findMinArrowShots(vector<vector<int>>& points) {
         if (points.size() == 0) {
            return 0;
        }
        sort(points.begin(),points.end(),sortcol);
        int arrowPos = points[0][1];
        int arrowCnt = 1;
        for (int i = 1; i < points.size(); i++) {
            if (arrowPos >= points[i][0]) {
                continue;
            }
            arrowCnt++;
            arrowPos = points[i][1];
        }
        return arrowCnt;
    }
};