class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<int>freq(1001,0);
        for(auto i:nums) freq[i]++;
        while((original<=1000 && freq[original]))
        {
         
             original*=2;
             
        
        }
        return original;
    }
};