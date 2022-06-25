class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int cur=INT_MAX;
        for(auto i:prices){
            cur=min(cur,i);
            ans=max(ans,i-cur);
        }
        return ans;
    }
};