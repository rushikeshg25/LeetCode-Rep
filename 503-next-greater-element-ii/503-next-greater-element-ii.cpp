class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int>ans(nums.size(),-1);
        for(int i=0;i<2*nums.size();i++){
            int num=nums[i%nums.size()];
            while(!s.empty() && nums[s.top()]<num){
                ans[s.top()]=num;
                s.pop();
            }
            if(i<nums.size()) s.push(i);
        }
        return ans;
    }
};