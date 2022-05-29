class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size(),mx=0;
        vector<long> nums;
        for(string s:words){
            bitset<26> mask;
            for(char i:s)
                mask[i-'a']=1;
            nums.push_back(mask.to_ulong());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((nums[i]&nums[j])==0)
                    mx=max(mx,(int)words[i].size()*(int)words[j].size());
            }
        }
        return mx;
    }
};