class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        sort(nums.begin(),end(nums));
        for(int i=0;i<n/2;i++)
        {
            ans=max(ans,nums[i]+nums[n-i-1]);
        }
        return ans;
    }
};