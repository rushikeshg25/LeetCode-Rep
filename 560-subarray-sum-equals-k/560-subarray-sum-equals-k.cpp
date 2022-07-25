class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int ans=0;
        int sum=0;
        for(auto i:nums){
            sum+=i;
            if(mp.find(sum-k)!=mp.end()) ans+=mp[sum-k];
            
            mp[sum]++;
        }
        return ans;
    }
};