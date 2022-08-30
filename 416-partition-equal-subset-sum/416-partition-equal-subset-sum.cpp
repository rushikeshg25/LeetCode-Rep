class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums) sum+=i;
        int k=sum;
        if(sum%2==0) sum=sum/2;
        else return false;
        vector<vector<int>>dp(nums.size()+1,vector<int>(k+1,-1));
        return fn(nums,0,sum,dp);
    }
    
    bool fn(vector<int>&nums,int i,int sum,vector<vector<int>>&dp){
        
        if(sum==0) return true;
        if(i>=nums.size() || sum<0) return false;
        if(dp[i][sum]!=-1) return dp[i][sum];
        return dp[i][sum]=fn(nums,i+1,sum,dp) || fn(nums,i+1,sum-nums[i],dp);
    }
};