class Solution {
public:
    int minPartitions(string n) {
        int ans=INT_MIN;
        for(auto i:n) ans=max(ans,i-'0');
        return ans;
    }
};