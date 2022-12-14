class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=nums[0];
        int neg_dp=0;
        for(int i=1;i<n;i++){
            int take;
            if(i-2<0)  take=nums[i]+neg_dp;
            else  take=nums[i]+dp[i-2];
            int nottake=dp[i-1];
            dp[i]=max(take,nottake);
            
        }
        return dp[n-1];
    }
};