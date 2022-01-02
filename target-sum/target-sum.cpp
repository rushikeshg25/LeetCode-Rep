class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
         int n=nums.size();
         int s=0;
         for(int i=0;i<nums.size();i++)s+=nums[i];
        
        if(s < abs(target) || (target+s) %2 != 0) return 0;
      
        int sum = (target+s)/2;
            
        int dp[n+1][sum+1];
        
        for(int i=0;i<=sum;i++)dp[0][i]=0;
        for(int i=0;i<=n;i++)dp[i][0]=1;
        
         for(int i=1;i<=n;i++){
             for(int j=0;j<=sum;j++){
                 if(nums[i-1] <= j )dp[i][j]=dp[i-1][j]+ dp[i-1][j-nums[i-1]];
                 else dp[i][j]=dp[i-1][j];
             }
         }
        return dp[n][sum];
        
    }
};