class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int ans=0;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
      for(int i=1;i<nums.size()-1;i++){
       if(nums[i-1]<nums[i] && nums[i]>nums[i+1]) ans++;
       if(nums[i-1]>nums[i] && nums[i]<nums[i+1]) ans++;
      }  
        return ans;
    }
};