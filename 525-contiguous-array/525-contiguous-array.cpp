class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int current=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        { 
          if(nums[i]==1)current++;
          else current--;
          if(mp.find(current)!=mp.end())
              ans=max(ans,i-mp[current]);
          else
          mp[current]=i;
          
        }
        return ans;
    }
};