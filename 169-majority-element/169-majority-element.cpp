class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,f=0;
        for(auto i:nums){
            if(f==0){
                ans=i;
                f++;
            }
            else if(i!=ans){
                f--;
            }
            else{
                f++;
            }
        }
        return ans;
    }
};