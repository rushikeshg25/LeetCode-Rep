class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        unordered_map<int,int>a;
        int ans=0;
        for(auto i:nums1)
        for(auto j:nums2)
        a[i+j]++;
        
        for(auto i:nums3)
        for(auto j:nums4)
        {
            ans+=a[-(i+j)];
        }
        return ans;
    }
};