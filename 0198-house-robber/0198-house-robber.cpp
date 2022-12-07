class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fn(nums,nums.size()-1,dp);
    }
    int fn(vector<int>nums,int i,vector<int>&dp){
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int rob=nums[i]+fn(nums,i-2,dp);
        int notRob=fn(nums,i-1,dp);
        return dp[i]=max(rob,notRob);
    }
};