class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        if (a[0] != b[0]){
            return a[0] < b[0];
        }else{
            return a[1] > b[1];
        }
    }
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), comp);
        int _max = INT_MIN;
        int count = 0;
        for (int i = 0; i<intervals.size(); i++){
            if (intervals[i][1] <= _max){
                count ++;
            }else{
                _max = intervals[i][1];
            }
        }
        return intervals.size()-count;
    }
};