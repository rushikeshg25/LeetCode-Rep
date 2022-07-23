
class Solution {
    int *bit, len = 20001, offset = 10001;
    void updateBit(int n) {
        while (n < len) {
            bit[n]++;
            n += n & (-n);
        }
    }
    int getValueFromBit(int n) {
        int res = 0;
        while (n > 0) {
            res += bit[n];
            n -= n & (-n);
        }
        return res;
    }
public:
    vector<int> countSmaller(vector<int>& nums) {
      
        vector<int> res(nums.size());
        bit = new int[len];
        fill(bit, bit + len, 0);
        for (int i = nums.size() - 1, n; i >= 0; i--) {
            n = nums[i] + offset;
            res[i] = getValueFromBit(n - 1);
            updateBit(n);
        }
        return res;
    }
};