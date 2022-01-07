class Solution {
public:
    int minOperations(vector<int>& nums) {
         int ans = 0, last = 0;
    for (auto n : nums) {
        ans += max(0, last - n + 1);
        last = max(n, last + 1);
    }
    return ans;
    }
};