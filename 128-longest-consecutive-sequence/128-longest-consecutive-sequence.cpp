class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int ans=0,cur=1;
        if(n==0 || n==1) return n;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)
            {cur++;
             
            }
            else if(nums[i]!=nums[i-1])cur=1;
           ans=max(ans,cur); 
        }
        
        return ans;
    }
};