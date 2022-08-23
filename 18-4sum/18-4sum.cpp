class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size(),left,right;
        if(n<4) return ans;
        long long target=t;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                left=j+1;
                right=n-1;
                long long k=target-nums[i]-nums[j];
                while(left<right){
                    long long sum=nums[left]+nums[right];
                    if(sum<k) left++;
                    else if(sum>k) right--;
                    else{
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        while(left<right && nums[left]==ans.back()[2]) left++;
                        while(left<right && nums[right]==ans.back()[3]) right--;
                    }
                    while(j+1<n && nums[j+1]==nums[j]) j++;
                }
                while(i+1<n && nums[i+1]==nums[i]) i++;
            }
        }
        return ans;
    }
};