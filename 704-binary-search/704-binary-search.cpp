class Solution {
public:
    int fn(vector<int>nums,int l,int r,int k){
        if(l>r) return -1;
        int mid=l+(r-l)/2;
        if(nums[mid]==k) return mid;
        else if(nums[mid]<k) return fn(nums,mid+1,r,k);
        return fn(nums,l,mid-1,k);
        
        
    }
    int search(vector<int>& nums, int target) {
        return fn(nums,0,nums.size()-1,target);
    }
};