class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
       
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] )
                {
                 dp[i]=max(dp[i],1+dp[j]);
                    
                }
            }
        }
        for(auto i:dp) cout<<i<<endl;
       int ans=1;
        for(auto i:dp) ans=max(ans,i);
        return ans;
    }
};