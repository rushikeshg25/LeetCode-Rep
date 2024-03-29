class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid;
        int n=nums.size();
        while(low<=high){
            mid=low+(high-low)/2;
            if((mid==n-1 || nums[mid]>nums[mid+1]) && (mid==0 || nums[mid]>nums[mid-1])) return mid;
            else if(nums[mid+1]>nums[mid]) low=mid+1;
            else high=mid-1;
        }
               return -1;
    }
};