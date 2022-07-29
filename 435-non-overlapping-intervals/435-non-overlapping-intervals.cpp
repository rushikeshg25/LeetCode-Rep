class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        if(a.size()<=1) return 0;
        int ans=0;
        sort(a.begin(),a.end(),cmp);
        vector<int>cur=a[0];
        for(int i=1;i<a.size();i++){
        if(cur[1]>a[i][0]) ans++;
        else cur=a[i];
        }
        return ans;
    }
};