class Solution {
public:
    int minimumTime(string s) {
        int ans=s.size();
        vector<int>a;
        for(auto i:s){
            if(i=='0') a.push_back(-1); 
            else a.push_back(1);
        }
        int sum=0;
        int mini=0;
        for(auto i:a){
            sum+=i;
            mini=min(mini,sum);
            if(sum>0) sum=0;
        }
        return ans+mini;
        
    }
};