class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int maxi=INT_MAX;
        for(auto i:prices){
             maxi=min(i,maxi);
            ans=max(ans,i-maxi);
        }
        return ans;
    }
};