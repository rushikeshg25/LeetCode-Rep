class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=nums[0],f=nums[0];
        f=nums[f];
        f=nums[f];
        s=nums[s];
        while(s!=f){
        f=nums[f];
        f=nums[f];
        s=nums[s]; 
        }
        f=nums[0];
        while(s!=f){
        f=nums[f];
        s=nums[s];
        }
        return f;
    }
};