int max(int a, int b) {return a>b ? a : b ;}

int maximumScore(int* nums, int numsSize, int* multipliers, int multipliersSize)
{
    int n = numsSize, m=multipliersSize;
    register int i, left, k;

    int dp[m+1];
    for (k=0; k<=m ; k++) dp[k]=0;
    
    for(i=m-1; i>=0; i--)
    {
        int nextRow[m+1];
        for (register int k=0; k<=m ; k++) nextRow[k]=dp[k];
    
        for (left=i; left>=0; left--)
        {
            dp[left] = max (  multipliers[i] * nums[left]               + nextRow[left + 1], 
                              multipliers[i] * nums[n - 1 - (i - left)] + nextRow[left]       );     
        }
    }
    
    return dp[0];
}