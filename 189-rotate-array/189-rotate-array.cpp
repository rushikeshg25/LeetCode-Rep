class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        std::rotate(nums.rbegin(), nums.rbegin() + k%nums.size(), nums.rend());
    }
};