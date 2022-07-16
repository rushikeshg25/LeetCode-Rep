class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        for(auto i:nums) s.insert(i);
        int ans=0;
        for(auto i:s){
        if(s.find(i-1)==s.end()){
            int y=i+1;
            while(s.find(y)!=s.end()) y++;
            ans=max(ans,y-i);
        }
        }
        return ans;
    }
};