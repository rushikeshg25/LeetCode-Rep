class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mi=nums[0];
        int mx=nums[0];
        int ans=1;
        for(auto i:nums){
            mi=min(mi,i);
            mx=max(mx,i);
            if(mx-mi>k) 
            {
                ans++;
                mi=mx=i;
                        }
        }
        return ans;
    }
};