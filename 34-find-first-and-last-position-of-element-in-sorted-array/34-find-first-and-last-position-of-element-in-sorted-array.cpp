class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        int last=lastocc(nums,target);
        if(last==-1) return {-1,-1};
        int first=firstocc(nums,target);
        return {first,last};
    }
    int firstocc(vector<int>& nums, int k) {
      int n=nums.size();
      int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==k){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<k) low=mid+1;
            else high=mid-1;
            
        }
        return ans;
    }
    int lastocc(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==k){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<k) low=mid+1;
            else high=mid-1;
            
        }
        return ans;
    }
};