class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int i = 0, j,count = 0;
        if(nums.size()<3){
            return 0;
        }
        for(i=0;i<nums.size()-2;i++){
            for(j=i+2;j<nums.size();j++){
                if(nums[i+1]-nums[i]==nums[j]-nums[j-1]){
                    count++;
                }
                else{
                    if(nums[i+1]-nums[i]!=nums[j]-nums[j-1])
                    break;
                }
            }
        }
        return count;
    }
};