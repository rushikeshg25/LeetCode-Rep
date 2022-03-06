class Solution {
    vector<int> getDigit(int n ){
        vector<int>res;
        if(n == 0)
            res.push_back(0);
        while(n){
            res.push_back(n % 10);
            n /= 10;
        }
        reverse(res.begin() , res.end());
        return res;
    }
    int getMappedVal(int n , vector<int>& mapping){
        vector<int>digits = getDigit(n);
        int sum = 0;
        for(int i = 0 ; i < digits.size() ; i++){
            sum = sum * 10 + mapping[digits[i]];
        }
        return sum ;
    }
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        multimap<int,int>mp;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            int mappedval = getMappedVal(nums[i] , mapping);
            mp.insert({mappedval , nums[i]});
        }
        vector<int>res;
        for(auto it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};