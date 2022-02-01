class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX;
        int ans=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            ans=max(ans,prices[i]-m);
        }
        return ans;
    }
};