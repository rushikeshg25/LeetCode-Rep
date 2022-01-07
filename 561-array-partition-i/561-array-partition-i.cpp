class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int ans=0;
        for(int i=0;i<nums.size();i+=2)
        {
            ans+=min(nums[i],nums[i+1]);
        }
        return ans;
    }
};