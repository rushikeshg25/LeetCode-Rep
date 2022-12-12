class Solution {
public:
    int climbStairs(int n) {
        vector<int>dp(n,0);
        dp[0]=1;
        int neg=0;
        for(int i=1;i<n;i++){
            if(i==1) dp[1]=2;
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
};

// // 
// if(i==0) return 1;
// if()