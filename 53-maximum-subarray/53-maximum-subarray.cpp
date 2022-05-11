class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int ans=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
         sum=sum+nums[i];
            if(ans<sum)
                ans=sum;
            if(sum<0)
                sum=0;
        }

        
        
        return ans;
    }
};