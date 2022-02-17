class Solution {
public:
    void fn(vector<int>& candidates, int target,int i ,int n ,vector<vector<int>>&ans, vector<int>&subans)
    {
        if(i>=n || target<0) return;
        if(target==0) 
        {
            ans.push_back(subans);
            return;
        }
        fn(candidates,target,i+1,n,ans,subans);
        subans.push_back(candidates[i]);
        fn(candidates,target-candidates[i],i,n,ans,subans);
        subans.pop_back();
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>subans;
        int n=candidates.size();
        fn(candidates,target,0,n,ans,subans);
        return ans;
    }
};