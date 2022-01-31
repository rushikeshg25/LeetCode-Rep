class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int sum=0;
        int ans=0;
        for(int i=0;i<a.size();i++)
            for(int j=0;j<(a[i].size());j++)
            {
                sum+=a[i][j];
                if(j==a[0].size()-1)
                {
                    ans=max(ans,sum);
                    sum=0;
                }
            }
        return ans;
    }
    
};