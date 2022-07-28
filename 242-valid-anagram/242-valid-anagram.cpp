class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size(),m=t.size();
        if(m!=n) return false;
         map<char,int>mp;
        for(auto i:s) mp[i]++;
        for(auto i:t){
            mp[i]--;
            if(mp[i]<0) return false;
        }
        return true;
    }
};