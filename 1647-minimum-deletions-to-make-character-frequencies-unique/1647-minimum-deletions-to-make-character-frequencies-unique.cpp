class Solution {
public:
    int minDeletions(string s) {
    int cnt[26]={0};
    set<int>a;
    int ans=0;
    for(auto i:s){
        cnt[i-'a']++;
    }
    for(int i=0;i<26;i++){
        for (; cnt[i] > 0 && !a.insert(cnt[i]).second; --cnt[i])
            ++ans;
    }
    return ans;
    }
};