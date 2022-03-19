class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int a[101]={0};
        int ans=0;
        for(auto i:nums) a[i]++;
        for(int i=0;i<101;i++){
            if(a[i]==1) ans+=i;
        }
        return ans;
    }
};