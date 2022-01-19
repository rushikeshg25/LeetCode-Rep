class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX;
        int profit=INT_MIN;
        for(auto i:prices)
        {
            minn=min(minn,i);
            profit=max(profit,i-minn);
        }
        return profit;
    }
};