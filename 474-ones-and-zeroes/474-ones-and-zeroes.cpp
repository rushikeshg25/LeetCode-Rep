class Solution {
public:
    vector<vector<vector<int> > > dp;
    int findMaxForm(vector<string>& str, int m, int n) {
        int l=str.size();
        vector<pair<int,int> > cnt(l);
       auto getCount = [&](string s){
            int cnt=0;;
            for(auto c:s) cnt += c-'0';
            return make_pair(s.length()-cnt,cnt);
        };
        
        for(int i=0;i<l;i++) cnt[i]=getCount(str[i]);
        
        dp.resize(2);
        for(auto &y:dp){
            y.resize(m+1);
            for(auto &x:y) x.resize(n+1);
        }
        
        for(int i=1;i<=l;i++){
            int z = cnt[i-1].first , o= cnt[i-1].second;
            for(int j=0;j<=m;j++){
                for(int k=0;k<=n;k++){
                    //if not include
                    dp[i%2][j][k] = dp[(i-1+2)%2][j][k];
                    //if included
                    if(j-z>=0 and k-o >=0){
                        dp[i%2][j][k] = max(dp[i%2][j][k] , 1 + dp[(i-1+2)%2][j-z][k-o]);
                    }
                }
            }
        }
        
        return dp[l%2][m][n];
    }
};