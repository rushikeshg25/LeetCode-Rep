class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int high=INT_MIN;
        int high2=INT_MIN;
        for(auto i:nums){
            if(i>high){
                high2=high;
                high=i;
            }
            else if(i>high2) high2=i;
            
        }
        int ans=(high-1) * (high2-1);
        return ans;
    }
};