class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&ans,int i,int n)
    {
        if(i>=n){ 
            ans.push_back(nums);
            return;
                 }
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            solve(nums,ans,i+1,n);
        }
            
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>subans=nums;
        int n=nums.size();
        solve(nums,ans,0,n);
        return ans;
    }
};