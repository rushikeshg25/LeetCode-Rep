class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx = 0;
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            mx = max(mx, (nums[i++] + nums[j--]));
        }
        return mx;
    }

};