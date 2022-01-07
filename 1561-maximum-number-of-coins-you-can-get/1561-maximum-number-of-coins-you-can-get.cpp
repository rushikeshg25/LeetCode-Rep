class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        if(n==1) return 0;
        if(n==2) return piles[0];
        int ans=0;
        int i=0,j=n-2,k=n-1;
        while(i<j)
        {
         ans+=piles[j];
            i++;
            j-=2;
        }
        return ans;
    }
};