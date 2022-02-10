class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cum=0; 
        map<int,int> rec; 
        int ans = 0; 
        rec[0]++; 
        for(int i=0;i<nums.size();i++){
            cum += nums[i];
            ans += rec[cum-k];
            rec[cum]++;
        }
        return ans;
    }
};