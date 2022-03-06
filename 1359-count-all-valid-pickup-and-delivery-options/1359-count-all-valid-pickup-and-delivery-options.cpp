class Solution 
{
    int MOD = 1000000007;
    public:
    int countOrders(int n) 
    {
        vector<long long> S(n,1);

        for(int i = 1 ; i < n ; i++)
            S[i] = ((i+1)*(2*i + 1)*S[i-1])%MOD;
        
        return S[n-1];
    }
};