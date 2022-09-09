class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0,end=0;
        int ans=0;
        for(end=0;end<nums.size();end++){
            if(nums[end]==0) k--;
            while(k<0){
            if(nums[start]==0) k++;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};