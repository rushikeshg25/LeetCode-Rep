class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for (auto i = 0; i < nums.size() - 1; ++i) {
            inc &= nums[i] <= nums[i+1];
            dec &= nums[i] >= nums[i+1];
        }
        return inc || dec;
    }
};